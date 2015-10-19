# solemnsky

## project status

At the moment I'm designing the infrastructure to make a basic multiplayer plane game, with scalability of function in mind.

## development

To build the project:
    
    ./dock/build.sh    # to build the archlinux based development environment
    ./dock/run.sh      # to run a console with everything needed to build
                         # the project

Inside the development environment:

    make web             # to compile the html5 release to dist/html5
    make clean           # delete all build results

## project structure

### /dist

Compiled distributions.

### /dock

Docker container(s) for predictable development on linux. build.sh builds the container (called solemnsky/kha) and run.sh runs it with the project files in scope.

### /export

Various top-level systems to deploy the code in /pure out into the world.

### /lib

Haxe library code, used by /pure.

### /media

Media of all types, with original artifacts.

### /pure

Minimal-dependency solemnsky-related haxe code; very portable. Deals with the world through an interface (solemnsky.control) which is implemented in the top-levels in /export.

### /util

Helper scripts and such.

## contact 

[project website](http://solemnsky.com)

[developer contact](http://magnetic.uk.to)

## credits

The Nape physics engine is sourced in pure/, licensed under BSD.

I'm using Kha for the html5 / webGL backend.

The logical core of the project is written in the Haxe language.
