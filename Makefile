
.PHONY: run

default: run

bin/main: src/main.cpp
	g++ -o bin/main src/main.cpp


clean:
	rm -rf bin/*

run: bin/main
	./bin/main
