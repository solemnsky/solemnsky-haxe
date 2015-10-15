FROM base/archlinux

# update everything. this takes a while.
ADD pacman.conf /etc/pacman.conf 
RUN pacman -Syu --noconfirm
RUN pacman-db-upgrade

# install development toolchain
RUN pacman -S --noconfirm nodejs base-devel

# install dependencies
RUN pacman -S --noconfirm alsa-lib freeglut
