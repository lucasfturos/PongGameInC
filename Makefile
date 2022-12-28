run: build
	./pong
build:
	gcc -Wall -o pong main.c
clear:
	@rm -rf pong