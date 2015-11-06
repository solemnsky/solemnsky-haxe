# SolemnSky

Read [our website](http://solemnsky.com) for our end user-facing status. If you ain't no end-user, read on.

SolemnSky is a long-term project, currently maintained by myself Magnetic Duck alone. If you want to contribute, send me a line via one of my contact media and I'll be happy to help you get started. If you're generally interested in the project but don't know much about it yet, this readme has some basic information.

I am dedicated to making this happen, however long it will take.

## index 

If you're interested in the top-level gist of this project, read 'outline of project direction'.

If you're interested in building our sources for yourself and possibly developing, read 'build instructions'.

For a quick view of our directory structure, read 'directories'.

For contact info or information on the resources put into this project read the last two sections 'contact' or 'credits'.

## outline of project direction

The development of SolemnSky is intended to consider implications in the realms of portability, extensibility, and performance. It is not enough for me to make a game, I intend to make a game well.

### portability

Good portability can yield an increased contact with more potential players without sacrificing features and stability. An engaging browser-playable demo could be a vector for virality and advertisement, for example, but we don't want to sacrifice a native release's advantages in performance and networking.

SolemnSky achieves portability by virtue of a decoupling between 'pure' code (abstracted from platform boilerplate) written in framework-agnostic Haxe (having no ties to systems like OpenFL or platform API) and the particulars of platform deployment. Haxe is an extremely portable language; its transpiler can export C++, Flash, JavaScript, and C# (among others), and various frameworks such as Kha, Flambe and Luxe exist to deploy Haxe systems smoothly to many interactive targets. SolemnSky's pure code, operating in a small UI API (see /pure/control/Control.hx) can independently be released to multiple platforms through relatively small boilerplate interfaces (see /export/).

### extensibility

Good extensibility implies an efficient and elegant handling of parallel and branched modification in any of the various levels the game's logic and interface. For example, game modes should be possible to develop in parallel, and tweaks in basic gameplay mechanics should ripple up the various branches of modification. Adding layers of functionality on top of already deployed modes without introducing complexity should be a non-issue.

SolemnSky achieves extensibility through a separation of a ``Core`` interface that defines core game logic from the definitions of UI and server-side release wrappers defined in function of these logical objects. Furthermore, the core game engine is defined as a separate object, used by the various Core implementations.

### performance

It's of utmost importance to make SolemnSky performant and playable to a competitive level on as many systems as possible. The 2D sprite-based graphics we intend to use will make rendering speed a non-issue; fast and efficient networking will receive much more attention on this front.

## build instructions

We assume you're using a UNIX-like OS for development. I personally use NixOS.

We use docker as a fool-proof build environment.
    
    ./dock/build.sh    # to build the archlinux based development environment
    ./dock/run.sh      # run a shell in the development container

Inside the development environment, the standard makefile is used to compile targets to the /dist directory. (The ``all`` target builds everything.)

## outline of export media

As outlined in the 'portability' section, there is a lowest common denominator API for an interactive / graphical system defined in pure/control, through which all of our pure code passes through, enabling the same code to be deployed to any multiple interactive system where I can define a boilerplate interface to run a Control object. These systems are currently:

- Kha (kha-web and kha-native)
  - Targets HTML5 flash and native, primarily.
  - Still in development.
  - I'm currently having issues getting correctly antialiased graphics and vector fonts.
  - Is the fastest especially on native.
- Flambe (flambe)
  - Targets HTML5 and flash, primarily.
  - Used by nickelodeon; is pretty stable.

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
