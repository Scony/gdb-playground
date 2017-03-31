Specify input in gdb runtime:
```bash
$ make sepsym
$ gdb
(gdb) exec-file main.out 
(gdb) core-file core 
(gdb) symbol-file main.debug
```

Specify input as gdb arguments:
```bash
$ gdb -s ./main.debug -e ./main.out -c core
```