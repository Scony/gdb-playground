nosym:
	g++ main.cpp

sym:
	g++ -g main.cpp

sepsym:
	g++ -g main.cpp -o main.out
	objcopy --only-keep-debug main.out main.debug
	strip --strip-debug --strip-unneeded main.out
	objcopy --add-gnu-debuglink=main.debug main.out

clean:
	rm -f *~ *.out *.debug core
