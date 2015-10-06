# runs in a container where the html5 and native linux target can be tested
docker run -it --name kha --rm -v "$(pwd)":/tmp/haxe -w /tmp/haxe \
  --priviliged \
  -v /etc/localtime:/etc/localtime:ro \
  -v /tmp/.X11-unix:/tmp/.X11-unix \
  -e DISPLAY=unix$DISPLAY \
  jess/chrome /bin/bash - 

# docker run -d \
  # --memory 3gb \
  # --net host \
  # -v /etc/localtime:/etc/localtime:ro \
  # -v /tmp/.X11-unix:/tmp/.X11-unix \
  # -e DISPLAY=unix$DISPLAY \
  # -v $HOME/Downloads:/root/Downloads \
  # -v $HOME/Pictures:/root/Pictures \
  # -v $HOME/Torrents:/root/Torrents \
  # -v $HOME/.chrome:/data \
  # -v /dev/shm:/dev/shm \
  # -v /etc/hosts:/etc/hosts \
  # --device /dev/snd \
  # --device /dev/dri \
  # --device /dev/video0 \
  # --group-add audio \
  # --group-add video \
  # --name chrome \
  # jess/chrome --user-data-dir=/data --force-device-scale-factor=1 \
  # --proxy-server="$proxy" --host-resolver-rules="$map" "$args"
