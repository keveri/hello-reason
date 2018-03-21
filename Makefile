build:
	jbuilder build

run: build
	./_build/install/default/bin/hello-reason-native

clean:
	rm -rf _build/* *.install

.PHONY: build release test
