all:
	g++ main.cpp -o TIVF-Viewer

test: all
	./TIVF-Viewer mario.tivf
