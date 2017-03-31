```bash
$ make sepsym
$ gdb
(gdb) exec-file main.out 
(gdb) core-file core 
(gdb) symbol-file main.debug
```

```bash
gdb -s ./main.debug -e ./main.out -c core
```