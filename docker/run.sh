# runs our dockerized kha with the project mounted to /tmp/haxe
docker run -it --name kha --rm -v "$(pwd)":/tmp/haxe -w /tmp/haxe solemnsky/kha /bin/bash 
