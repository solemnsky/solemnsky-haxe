package solemnsky.math;

class Vec2 {
    public inline function new(x: Float = 0, y: Float = 0): Void {
        this.x = x;
        this.y = y;
    }
    
    public var x: Float;
    public var y: Float;
    public var length(get, set): Float;
    
    private function get_length(): Float {
        return Math.sqrt(x * x + y * y);
    }
    
    private function set_length(length: Float): Float {
        var currentLength = get_length();
        if (currentLength == 0) return 0;
        var mul = length / currentLength;
        x *= mul;
        y *= mul;
        return length;
    }
    
    public inline function add(vec: Vec2): Vec2 {
        return new Vec2(x + vec.x, y + vec.y);
    }
    
    public inline function sub(vec: Vec2): Vec2 {
        return new Vec2(x - vec.x, y - vec.y);
    }
    
    public inline function mult(value: Float): Vec2 {
        return new Vec2(x * value, y * value);
    }
    
    public inline function div(value: Float): Vec2 {
        return mult(1 / value);
    }
    
    public inline function dot(v: Vec2): Float {
        return x * v.x + y * v.y;
    }
    
    public inline function normalize(): Void {
        length = 1;
    }
}