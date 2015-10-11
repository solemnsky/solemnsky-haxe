# solemnsky

## project status

At the moment I'm designing the infrastructure to make a basic multiplayer plane game, with scalability of function in mind.

## development

To build the project:
    
    ./Docker/build.sh    # to build the archlinux based development environment
    ./Docker/run.sh      # to run a console with everything needed to build
                         # the project

Inside the development environment:

    make web             # to compile the html5 release 
    make native          # to compile the native linux release
    make server          # to compile the node.js server
    make                 # to compile all three
    make clean-build     # delete all build results

## project structure

solemnsky.control contains a small API of sorts to wrap the program control (control.Control), an event datatype (control.Event), and a scenegraph system (control.Scene), which are implemented through kha in solemnsky.kha, exporting a top-level interface in solemnsky.kha.Manager. This is the extent of the low-ish level boilerplate in the project.

solemnsky.core defines a Core interface representing the logic our game can define (multiplayer interaction, event handling, player listing etc) and definitions of inter-dependant classes that implement it. To turn a Core into a client through the Control system or a standalone server, an interface from solemnsky.ui is used.

The top-level haxe classes behind the three releases (native, web, and server-side) can be found in the Targets/ directory.

## contact 

[project website](http://solemnsky.com)

[developer contact](http://magnetic.uk.to)
