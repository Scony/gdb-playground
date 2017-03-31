nosym:
	g++ -fPIC -shared lib-bbb.cpp -o libbbb.so

sym:
	g++ -g -fPIC -shared lib-bbb.cpp -o libbbb.so

sepsym:
	g++ -g -fPIC -shared lib-bbb.cpp -o libbbb.so
	objcopy --only-keep-debug libbbb.so libbbb.debug
	strip --strip-debug --strip-unneeded libbbb.so
	objcopy --add-gnu-debuglink=libbbb.debug libbbb.so

clean:
	rm -f *~ *.debug *.so
