.PHONY: compile-gpp
compile-gpp:
	g++ src/main.cpp -o main

.PHONY: compile
compile:
	clang++ -std=c++1z -stdlib=libc++ -Weverything -Wno-c++98-compat src/main.cpp -o main

.PHONY: run
run:
	make compile; ./main