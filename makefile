all: web

clean:
	rm -rf dist/*
	rm -rf export/flambe/build/
	rm -rf export/kha-web/build/

flambe:
	# build
	cd export/flambe && \
	flambe build html
	# copy to dist
	rm -rf dist/flambe/ ; mkdir -p dist/flambe/
	rm -rf ./dist/flambe/
	cp -r export/flambe/build/web/* ./dist/flambe/

kha-web:
	# build
	cd export/kha-web && \
	node Kha/make html5
	# copy to dist
	rm -rf dist/kha-web/ ; mkdir -p dist/kha-web/
	rm -rf ./dist/kha-web/
	cp -r export/kha-web/build/html5/* ./dist/kha-web/

