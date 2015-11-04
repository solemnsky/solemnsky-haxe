package util;

/**
 * util.Transform
 * Transform class, representing an affine transformation.
 */

enum TransformConstruct {
    Identity;
    Translation(x:Float, y:Float);
    Scale(x:Float, y:Float);
    Rotate(alpha:Float);
}

class Transform {
    /*************************************************************************/
    /* variables and constructor
    /*************************************************************************/

    public var _00: Float; public var _10: Float; public var _20: Float;
    public var _01: Float; public var _11: Float; public var _21: Float;
    public var _02: Float; public var _12: Float; public var _22: Float;

    public function new() {
        set(0, 0, 0
          , 0, 0, 0
          , 0, 0, 0);
    }

    public function fromConstruct(construct:TransformConstruct) {
        switch (construct)  {
            case Translation()
        }
    }

    /*************************************************************************/
    /* helper constructors
    /*************************************************************************/

    public function set(
        _00: Float, _10: Float, _20: Float,
        _01: Float, _11: Float, _21: Float,
        _02: Float, _12: Float, _22: Float
    ){
        this._00 = _00; this._10 = _10; this._20 = _20;
        this._01 = _01; this._11 = _11; this._21 = _21;
        this._02 = _02; this._12 = _12; this._22 = _22;
    }

    public static inline function translation(x:Float, y:Float):Transform {
        return new Transform(
            1, 0, x,
            0, 1, y,
            0, 0, 1
        );
    }

    public static inline function empty():Transform {
        return new Transform(
            0, 0, 0,
            0, 0, 0,
            0, 0, 0
        );
    }

    public static inline function identity(): Transform {
        return new Transform(
            1, 0, 0,
            0, 1, 0,
            0, 0, 1
        );
    }

    public static inline function scale(x: Float, y: Float): Transform {
        return new Transform(
            x, 0, 0,
            0, y, 0,
            0, 0, 1
        );
    }

    public static inline function rotation(alpha: Float): Transform {
        return new Transform(
            Math.cos(alpha), -Math.sin(alpha), 0,
            Math.sin(alpha), Math.cos(alpha), 0,
            0, 0, 1
        );
    }

    /*************************************************************************/
    /* combinators
    /*************************************************************************/

    public inline function add(m: Transform): Transform {
        return new Transform(
            _00 + m._00, _10 + m._10, _20 + m._20,
            _01 + m._01, _11 + m._11, _21 + m._21,
            _02 + m._02, _12 + m._12, _22 + m._22
        );
    }

    public inline function sub(m: Transform): Transform {
        return new Transform(
            _00 - m._00, _10 - m._10, _20 - m._20,
            _01 - m._01, _11 - m._11, _21 - m._21,
            _02 - m._02, _12 - m._12, _22 - m._22
        );
    }

    public inline function mult(value: Float): Transform {
        return new Transform(
            _00 * value, _10 * value, _20 * value,
            _01 * value, _11 * value, _21 * value,
            _02 * value, _12 * value, _22 * value
        );
    }

    public inline function transpose(): Transform {
        return new Transform(
            _00, _01, _02,
            _10, _11, _12,
            _20, _21, _22
        );
    }

    public inline function multmat(m: Transform): Transform {
        return new Transform(
            _00 * m._00 + _10 * m._01 + _20 * m._02, _00 * m._10 + _10 * m._11 + _20 * m._12, _00 * m._20 + _10 * m._21 + _20 * m._22,
            _01 * m._00 + _11 * m._01 + _21 * m._02, _01 * m._10 + _11 * m._11 + _21 * m._12, _01 * m._20 + _11 * m._21 + _21 * m._22,
            _02 * m._00 + _12 * m._01 + _22 * m._02, _02 * m._10 + _12 * m._11 + _22 * m._12, _02 * m._20 + _12 * m._21 + _22 * m._22
        );
    }

    public inline function multvec(value: Vector): Vector {
        var w = _02 * value.x + _12 * value.y + _22 * 1;
        var x = (_00 * value.x + _10 * value.y + _20 * 1) / w;
        var y = (_01 * value.x + _11 * value.y + _21 * 1) / w;
        return new Vector(x, y);
    }


    /*************************************************************************/
    /* inverse
    /*************************************************************************/

    public inline function cofactor(
        m0: Float, m1: Float, m2: Float, m3: Float
    ):Float {
        return m0 * m3 - m1 * m2;
    }

    public inline function determinant(): Float {
        var c00 = cofactor(_11, _21, _12, _22);
        var c01 = cofactor(_10, _20, _12, _22);
        var c02 = cofactor(_10, _20, _11, _21);
        return _00 * c00 - _01 * c01 + _02 * c02;
    }

    public inline function inverse(): Transform {
        var c00 = cofactor(_11, _21, _12, _22);
        var c01 = cofactor(_10, _20, _12, _22);
        var c02 = cofactor(_10, _20, _11, _21);

        var det: Float = _00 * c00 - _01 * c01 + _02 * c02;
        if (Math.abs(det) < 0.000001) {
            throw "determinant is too small";
        }

        var c10 = cofactor(_01, _21, _02, _22);
        var c11 = cofactor(_00, _20, _02, _22);
        var c12 = cofactor(_00, _20, _01, _21);

        var c20 = cofactor(_01, _11, _02, _12);
        var c21 = cofactor(_00, _10, _02, _12);
        var c22 = cofactor(_00, _10, _01, _11);

        var invdet: Float = 1.0 / det;
        return new Transform(
             c00 * invdet, -c01 * invdet,  c02 * invdet,
            -c10 * invdet,  c11 * invdet, -c12 * invdet,
             c20 * invdet, -c21 * invdet,  c22 * invdet
        );
    }
}
