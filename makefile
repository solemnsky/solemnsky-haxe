all: web

clean:
	rm -rf ./dist/*

web:
	# build compiled web export
	cd export/kha-web && \
	node Kha/make html5 
	cp -r export/kha-web/build/html5 ./dist/

