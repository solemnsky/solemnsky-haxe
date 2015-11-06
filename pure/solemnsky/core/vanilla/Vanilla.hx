package solemnsky.core.vanilla;

/**
 * solemnsky.core.vanilla.Vanilla:
 * Vanilla core object.
 */

class Vanilla {

    /**
     * Overlay making it very clear that this is a WIP.
     */
    private function renderOverlay():Scene {
        var scene = new Scene();
        scene.prims = [
            SetColor(0, 0, 0, 255)
            , SetFont("Arial", 14)
            , DrawText(new Vector(0, 0), CenterText
                , "Development demo: enjoy at your own risk.")
        ];
        scene.trans = Transform.translation(800, 5)
            .multmat(Transform.scale(3, 3));
        return scene;
    }

    public function render(delta:Float):Scene {
        var scene = new Scene();

        scene.children = [
            renderOverlay()
        ];
        for(player in players){
            scene.children.push(Graphics.renderPlayer(player));
        }

        return scene;
    }
}