all: flambe kha-web

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

