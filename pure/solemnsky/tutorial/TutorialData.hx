package solemnsky.tutorial;

/**
 * solemnsky.tutorial.TutorialData:
 * Datatype for props and players in the tutorial.
 */

typedef TutPlayer {
    name:String
}

enum PropType {
    LittleBox;
}

typedef TutProp {
    type:PropType
}
