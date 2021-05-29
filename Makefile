all:
	g++ main.cpp -o TIVF-Viewer

test: all
	echo 'image.tivf' | ./TIVF-Viewer
