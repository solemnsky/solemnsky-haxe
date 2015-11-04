package control;

import util.Pool;
import util.Vector;
import util.Transform;
import util.Noise;

/**
 * control.Mem:
 * 
 * Pool super-structure that should be passed through our game code, with
 * getters for Transforms, Vectors and Scenes.
 */

class Mem {
    private var vecPool:Pool<Vector>;
    private var transPool:Pool<Transform>;
    private var scenePool:Pool<Scene>;

    public function new() {
        vecPool = new Pool();
        transPool = new Pool();
        scenePool = new Pool(); 
    }

    public function vec(construct:VectorConstruct):Vector {
        return vecPool.get(construct);
    }

    public function trans(construct:TransformConstruct):Transform {
        return transPool.get(construct);
    }

    public function scene():Scene {
        return scenePool.get(Noise);
    }
}
