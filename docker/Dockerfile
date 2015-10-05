FROM base/archlinux

RUN echo "installing required software (updated system, nodejs)";\
    pacman --noconfirm -Sy ;\
    pacman --noconfirm -S nodejs 

RUN echo "installing media utility libraries";\
    pacman --noconfirm -S libvorbis flac;\
