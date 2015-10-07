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


