# SolemnSky

***** THIS REPO IS ARCHIVED, SEE 'SOLEMNSKY' FOR THE NEW CODEBASE IN C++ *****

[Our website](http://solemnsky.com) will be updated accordingly when certain milestones in project development are met. For now this repository is the primary hub of SolemnSky project activity.

## project design

This project is not hacked together in the interest of producing a product quickly. It's designed in the interest of producing a good product that can be relied on as the base for future development.

Here's a quick overview of the way I have things set up...

### design sketch

I have chosen the [Haxe language](http://haxe.org) for core development. Its virtues include:

- Transpilation to many targets (javascript, flash, C++ to name a few)
- Generally good OOP-based design, with a powerful type system and GADTs (yay).
- A small history of being used for indie game development.

There are a lot of different frameworks for putting haxe on cross-platform interactive targets... for our purposes it turned out that Kha was a promising choice, but in order to wrap some of Kha's low-level interface and make future adoptions of different platforms painless I wrote a simple API to pass all our interactive code through; see /pure/control/.

The general game infrastructure is fairly well organised into a several levels. At the bottom, we have our game engine; this manages the state and simulation of a game situation, encapsulates custom logic and data, and presents us with a host of utilities for networking and graphics. We reference [the nape physics engine](http://napephys.com) for the (fairly simple) physics and spacial querying we require. 

Further up, we have the Core interface, which represents, in a abstracted way, the way a game mode behaves. It is abstracted from the actual user interfaces and servers which can run the game mode.

Finally we have several UI and server constructors which take a Core and run it in different ways (returning a Control).

That's the sketch anyway; of course, the devil is in the details...

## roadmap

Name | Description | Completion 
---- | ----------- | ---------
Goal | Investigate Haxe and interactive frameworks. | Completed 
Goal | Create a project-specific API (Control) to write our interactive code in function of, implement it in Kha. | Completed 
Goal | Create dockerized build system, organise project file structure, find a satisfactory physics engine. | Completed
Goal | Demonstrate the Control framework by creating a demo in it (using the physics engine), account for possible performance pitfalls. | Completed
Goal | Sketch the project structure upwards of Control (Core, UI, Engine, etc). | Completed
Goal | Port code from the old javascript repository, begin writing a central game engine. | Completed
Goal | Mature the design and implementation of the game engine, using it to build a tutorial / gameplay demo. | Completed
Goal | Mature the tutorial flow, adding basic features. | Completed.
Goal | Further mature the tutorial flow, simultaneously giving an example of a fully fledged usage of the engine and making it something useful. | In progress.
Goal | Integrate basic network functionalities into the game engine. | Completed
Goal | Implement a Core (Vanilla) with networking. | Finishing.
Goal | Make an offline demo UI to test the Vanilla core. | In progress.
Goal | Find or create UDP utilities, successfully build to native. | In progress.
Goal | Write a simple client-server pair with the UDP utilities, run Vanilla through it. | None
Goal | Make some initial pokes at optimizing networking, at least make a basic zero-interaction non-deltacompressed situation playable. | None.
Milestone | Add graphics (and some sound potentially) to the demo, make presentable, add it to solemnsky.com. | In progress with our graphic designer.
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

All code besides the aforementioned utilities was written by myself, Chris Gadzinski. 

All interesting graphics are created by Le Grape.

