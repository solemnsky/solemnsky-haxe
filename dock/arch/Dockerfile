FROM base/archlinux

############## base system ###################

# system update
ADD pacman.conf /etc/pacman.conf 
RUN pacman -Syu --noconfirm 
RUN pacman-db-upgrade

# devel libs
RUN pacman -S --noconfirm alsa-lib freeglut base-devel

# node
RUN pacman -S --noconfirm nodejs npm


############## flambe-specific ###################

# download / install the haxe binaries
RUN curl http://www.openfl.org/builds/haxe/haxe-3.1.3-linux-installer.tar.gz > \
      /tmp/installer.tar.gz ;\
    cd /tmp/ ;\
    tar -xf installer.tar.gz ;\
    yes | ./install-haxe.sh


# download the flambe node package
RUN npm install -g flambe ;\
    flambe update

############## KHA-specific ###################

# nothing to do

