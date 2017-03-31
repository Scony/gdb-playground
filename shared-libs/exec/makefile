deps:
	cp ../lib-aaa/libaaa.so .
	cp ../lib-bbb/libbbb.so .
nosym:
	g++ main.cpp -o main.out -L. -laaa -lbbb -Wl,-rpath=.

sym:
	g++ -g main.cpp -o main.out -L. -laaa -lbbb -Wl,-rpath=.

clean:
	rm -f *~ *.debug *.so *.out core
