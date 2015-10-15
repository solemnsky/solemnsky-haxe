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

### /dock

Docker container(s) for predictable development on linux. build.sh builds the container (called solemnsky/kha) and run.sh runs it with the project files in scope.

### /export

Various top-level systems to deploy the code in /pure out into the world.

### /media

Media of all types, with original artifacts.

### /pure

Minimal-dependency haxe code; extremely portable. Deals with the world through an interface (solemnsky.control) which is implemented in the various top-levels in /export

### /util

Helper scripts and such.

## contact 

[project website](http://solemnsky.com)

[developer contact](http://magnetic.uk.to)
