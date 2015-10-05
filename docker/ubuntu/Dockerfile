FROM ubuntu

# update system 
RUN sudo add-apt-repository -y ppa:ubuntu-toolchain-r/test ;\
    sudo apt-get -y update ;\
    sudo apt-get -y upgrade ;\
    sudo apt-get -y dist-upgrade 

# install gcc and node
RUN apt-get -y install gcc-4.9 curl ;\
    curl -sL https://deb.nodesource.com/setup_4.x | sudo -E bash - ;\
    apt-get install -y nodejs

# install random shit that happens to be necessary
# RUN apt-get -y install libvorbis-dev flac
