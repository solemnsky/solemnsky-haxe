all: web

clean:
	rm -rf ./dist/*

html:
	# pure html5 release courtesy of Flambe
	cd export/flambe && \
	flambe build html
	cp -r export/flambe/build/web ./dist/

native:
	# fast native release courtesy of Kha
	echo "TODO lol" 
	false


