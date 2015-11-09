# SolemnSky

[Our website](http://solemnsky.com) will be updated accordingly when certain milestones in project development are met. For now this repository is the primary hub of SolemnSky project activity.

## project design

This project is not hacked together in the interest of producing a product quickly. It's designed in the interest of producing a good product that can be relied on as the base for future development.

Here's a quick overview of the way I have things set up...

### the base

I have chosen the [Haxe language](http://haxe.org) for core development. Its virtues include:

- Transpilation to many targets (javascript, flash, C++ to name a few)
- Generally good OOP-based design, with a powerful type system and GADTs.
- A small history of being used for indie game development.

To turn our code into interactive content on the target platforms, there are many haxe-based frameworks to choose from. I wrote a simple API that our code runs through (/pure/control), which can then be implemented in many ways; currently we are using Kha.

### interfaces

There are two important interfaces through with our core passes:

#### Control (/pure/control/)

This is an interface representing an interactive user interface or server. It's turned into a tangible export through one of our export media.

#### Core (/pure/solemnsky/core/)

This is an interface representing a game mode, with networking functions and a whole load of stuff. It's turned into a Control through one of our UIs in solemnsky.ui.

### the engine

Using [the nape physics engine](http://napephys.com) for the heavy lifting, I define a central game engine, universally useful across our code. It's used directly in the gameplay tutorial (solemnsky.ui.Tutorial.run()) and in the various Cores. It should itself manage state and network syncing as well as gameplay mechanics, delegating only more meaningful tasks to its user.

## roadmap

Name | Description | Completion 
Goal 1 | Investigate Haxe and interactive frameworks. | Completed 
Goal 2 | Create a project-specific API (Control) to write our interactive code in function of, implement it in Kha. | Completed 
Goal 3 | Create dockerized build system, organise project file structure, find a satisfactory physics engine. | Completed
Goal 3 | Demonstrate the Control framework by creating a demo in it (using the physics engine), account for possible performance pitfalls. | Completed
Goal 4 | Sketch the project structure upwards of Control (Core, UI, Engine, etc). | Completed
Goal 5 | Port code from the old javascript repository, begin writing a central game engine. | Completed
Goal 6 | Conclude the design and implementation of the game engine, using it to build a tutorial / gameplay demo. | In progress
Milestone 1 | Add graphics to the demo, make presentable, add it to solemnsky.com. | None
Goal 7 | Integrate network sync functionalities into the game engine. | None
Goal 8 | Implement a Core (Vanilla) with networking, and make a Demo UI to test it. | Sketched
Goal 9 | Find or create UDP utilities. | None
Goal 10 | Write a simple client-server pair with the UDP utilities, run Vanilla through it. | None
Milestone 2 | Add functionality to the client-server pair, make Vanilla playable | None

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

The Nape physics engine is sourced in /lib/, licensed under BSD.

I intend to use Kha as well as possibly Flambe for the backends. Kha is sourced in /export/.

The logical core of the project is written in the Haxe (v3) language.

All development besides the aforementioned utilities was done by myself, Chris Gadzinski. 
