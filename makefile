.PHONY: *

clean-build:
	# removing all temporary build files
	rm -rf ./build
	rm -f ./korefile.js

clean-targets:
	# resetting top-level class and project file
	rm -f Sources/Main.hx
	rm -f ./project.kha

clean: clean-targets

native-build: 
	# writing kha top-level class and project file
	cp Targets/Native.hx ./Sources/Main.hx
	cp Targets/Native.kha ./project.kha
	# building
	node Kha/make --compile	

native: native-build clean-targets

web-build: 
	# writing kha top-level class and project file
	cp Targets/Web.hx ./Sources/Main.hx
	cp Targets/Web.kha ./project.kha
	# building
	node Kha/make html5

web: web-build clean-targets
