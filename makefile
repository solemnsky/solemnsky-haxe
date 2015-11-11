all: flambe kha-web kha-native

clean:
	rm -rf dist/*
	rm -rf export/flambe/build/
	rm -rf export/kha-web/build/

flambe:
	### FLAMBE ###
	cd export/flambe && \
	flambe build html
	
	rm -rf dist/flambe/ ; mkdir -p dist/flambe/
	cp -r export/flambe/build/web/* ./dist/flambe/

kha-web:
	### KHA-WEB ###
	cd export/kha-web && \
	node Kha/make html5

	rm -rf dist/kha-web/ ; mkdir -p dist/kha-web/
	cp -r export/kha-web/build/html5/* ./dist/kha-web/ 
	
	closure --compilation_level SIMPLE dist/kha-web/kha.js > dist/kha-web/kha.min.js 
	mv dist/kha-web/kha.min.js dist/kha-web/kha.js 

kha-native:
	### KHA-NATIVE ###
	cd export/kha-native && \
	node Kha/make 	

	rm -rf dist/kha-native/ ; mkdir -p dist/kha-native/
	cp -r export/kha-native/build/linux-build/* ./dist/kha-native/

simple-js:
	### SIMPLE-JS ###
	cd export/simple-js && \
	haxe build.hxml

	rm -rf dist/simple-js/ ; mkdir -p dist/simple-js/
	cp -r export/simple-js/build/* ./dist/simple-js/

