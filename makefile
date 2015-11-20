all: flambe kha-web kha-native

clean:
	rm -rf dist/*
	rm -rf export/flambe/build/
	rm -rf export/kha-web/build/

kha-web:
	### KHA-WEB ###
	cd export/kha-web && \
	node Kha/make html5

	rm -rf dist/kha-web/ ; mkdir -p dist/kha-web/
	cp -r export/kha-web/build/html5/* ./dist/kha-web/ 
	

kha-web-compiled: kha-web
	### KHA-WEB-COMPILED ###
	rm -rf dist/kha-web-compiled/ ; mkdir -p dist/kha-web-compiled/
	cp -r dist/kha-web/* ./dist/kha-web-compiled

	closure --compilation_level SIMPLE dist/kha-web-compiled/kha.js > dist/kha-web-compiled/kha.min.js 
	mv dist/kha-web-compiled/kha.min.js dist/kha-web-compiled/kha.js 

kha-native:
	### KHA-NATIVE ###
	cd export/kha-native && \
	node Kha/make 	

	rm -rf dist/kha-native/ ; mkdir -p dist/kha-native/
	cp -r export/kha-native/build/linux-build/* ./dist/kha-native/

simple-js:
	### SIMPLE-JS ###
	cd export/simple-js && \
	# ../../export/common/kha/Kha/Tools/haxe/haxe-linux64 build.hxml
	haxe build.hxml	

	rm -rf dist/simple-js/ ; mkdir -p dist/simple-js/
	cp -r export/simple-js/build/* ./dist/simple-js/

