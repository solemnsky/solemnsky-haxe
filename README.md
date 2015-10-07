# solemnsky

## project status

At the moment I'm designing the infrastructure to make a basic multiplayer plane game, with scalability of function in mind.

## development

To build the project:
    
    ./docker/build.sh    # to build the archlinux based development environment
    ./docker/run.sh      # to run a console with everything needed to build
                         # the project

Inside the development environment:

    node Kha/make html5      # to build the html5 release to
                             # ./build/html5/index.html
    node Kha/make --compile  # to compile the native linux release

## project structure

solemnsky.control contains a small API of sorts to wrap the program control (control.Control), an event datatype (control.Event), and a scenegraph system (control.Scene), which are implemented through kha in solemnsky.kha, exporting a top-level interface in solemnsky.kha.Manager. This is the extent of the low-ish level boilerplate in the project.

solemnsky.core defines a Core interface representing the logic our game can define (multiplayer interaction, event handling, player listing etc) and definitions of inter-dependant classes that implement it. To turn a Core into a client through the Control system or a standalone server, an interface from solemnsky.interface is used.

## contact 

[project website](http://solemnsky.com)

[developer contact](http://magnetic.uk.to)
