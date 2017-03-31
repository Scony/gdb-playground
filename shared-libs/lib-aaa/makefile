nosym:
	g++ -fPIC -shared lib-aaa.cpp -o libaaa.so

sym:
	g++ -O0 -g -fPIC -shared lib-aaa.cpp -o libaaa.so

sepsym:
	g++ -O0 -g -fPIC -shared lib-aaa.cpp -o libaaa.so
	objcopy --only-keep-debug libaaa.so libaaa.debug
	strip --strip-debug --strip-unneeded libaaa.so
	objcopy --add-gnu-debuglink=libaaa.debug libaaa.so

clean:
	rm -f *~ *.debug *.so
