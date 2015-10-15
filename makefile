# yes, this is how I use makefiles
.PHONY: *

all: native-build web-build server-build clean-targets

clean: clean-targets
	# clean build results
	rm -rf ./build
	rm -f ./korefile.js

clean-targets:
	# resetting kha project files
	rm -f Sources/Main.hx
	rm -f ./project.kha

native-build: 
	# building for native
	cp Targets/Native.hx ./Sources/Main.hx
	cp Targets/Native.kha ./project.kha
	node Kha/make --compile	

native: native-build clean-targets

web-build: 
	# building for web
	cp Targets/Web.hx ./Sources/Main.hx
	cp Targets/Web.kha ./project.kha
	node Kha/make html5

web: web-build clean-targets

server-build:
	# building for node.js server
	cp Targets/Server.hx ./Sources/Main.hx
	cp Targets/Server.kha ./project.kha
	node Kha/make node

server: server-build clean-targets

