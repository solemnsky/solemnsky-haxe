# SolemnSky

[Our website](http://solemnsky.com) will be updated accordingly when certain milestones in project development are met. For now this repository is the primary hub of SolemnSky project activity.

## project design

This project is not hacked together in the interest of producing a product quickly. It's designed in the interest of producing a good product that can be relied on as the base for future development.

Here's a quick overview of the way I have things set up...

### the base

I have chosen the [Haxe language](http://haxe.org) for core development. Its virtues include:

- Transpilation to many targets (javascript, flash, C++ to name a few)
- Generally good OOP-based design, with a powerful type system and GADTs (yay).
- A small history of being used for indie game development.

### interfaces

There are two important interfaces through with our code passes along its way to become a thing you can play:

Core: This is an interface representing a game mode, with networking functions and a whole load of stuff. It's turned into a Control through one of our UIs in solemnsky.ui.

Control: This is an interface representing an interactive user interface or server. It's turned into a tangible export through one of our export media. By the power of haxe, the exact same Control object can be turned into a Flash .swf file, a html5 game, or a C++ executible.

### the engine

Using [the nape physics engine](http://napephys.com) for the heavy lifting, I define a central game engine, universally useful across our code. It's used directly in the gameplay tutorial (solemnsky.tutorial.Tutorial.run()) and in the various Cores. It should itself manage state and network syncing as well as gameplay mechanics, delegating only more meaningful tasks to its user.

## roadmap

Name | Description | Completion 
---- | ----------- | ---------
Goal 1 | Investigate Haxe and interactive frameworks. | Completed 
Goal 2 | Create a project-specific API (Control) to write our interactive code in function of, implement it in Kha. | Completed 
Goal 3 | Create dockerized build system, organise project file structure, find a satisfactory physics engine. | Completed
Goal 3 | Demonstrate the Control framework by creating a demo in it (using the physics engine), account for possible performance pitfalls. | Completed
Goal 4 | Sketch the project structure upwards of Control (Core, UI, Engine, etc). | Completed
Goal 5 | Port code from the old javascript repository, begin writing a central game engine. | Completed
Goal 6 | Mature the design and implementation of the game engine, using it to build a tutorial / gameplay demo. | Completed
Goal 7 | Mature the tutorial flow, adding basic features. | Completed.
Milestone | Add graphics to the demo, make presentable, add it to solemnsky.com. | Waiting on graphics from Grape.
Goal 8 | Integrate basic network functionalities into the game engine. | Completed
Goal 9 | Implement a Core (Vanilla) with networking. | In progress, restarting.
Goal 10 | Make an offline demo UI to test the Vanilla core. | None
Goal 11 | Find or create UDP utilities. | Researched
Goal 12 | Write a simple client-server pair with the UDP utilities, run Vanilla through it. | None
Milestone | Add functionality to the client-server pair, make Vanilla playable | None

## build instructions

We assume you're using a UNIX-like OS for development. I personally use NixOS.

We use docker as a fool-proof build environment.
    
    ./dock/build.sh    # to build the archlinux based development environment
    ./dock/run.sh      # run a shell in the development container

Inside the development environment, the standard makefile is used to compile targets to the /dist directory. (The ``all`` target builds everything.)

## directories

- /dist/
  - Compiled distributions.
- /dock/
  - Dockerfile and scripts for predictable development on linux. build.sh builds the container (called solemnsky/kha) and run.sh runs it with the project files in the working directory.
- /export/
  - Various top-level systems to deploy the code in /pure out into the world.
- /lib/
  - Haxe library code, used by /pure and symlinked in /export.
- /media/
  - Media of all types, with original artifacts.
- /pure/
  - Minimal-dependency solemnsky-related haxe code; very portable. Deals with the world through an interface (solemnsky.control) which is implemented in the top-levels in /export.
- /util/
  - Helper scripts and such.

## contact 

[project website](http://solemnsky.com)

[developer contact](http://magnetic.uk.to)

## credits

The Nape physics engine (by Luca Deltodesco) is sourced in /lib/ (https://github.com/deltaluca/nape).

The haxe-msgpack library (by Achmad Aulia Noorhakim) is sourced in /lib/ (https://github.com/aaulia/msgpack-haxe).

The Kha framework (by KTX Software Development) is sourced in /export/common/kha/Kha (https://github.com/KTXSoftware/Kha).

The logical core of the project is written in the Haxe language (http://haxe.org).

All development besides the aforementioned utilities was done by myself, Chris Gadzinski. 

