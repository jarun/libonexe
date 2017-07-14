# libonexe

Simple project to demo a library (libsum.a) and an executable may be inter-dependent.

Outline:

`prog.c` defines `mean(int, int)` and calls the function `sum(int, int)` which is defined in the library.

`calc_sum.c` defines `sum(int, int)` which calls `mean(int, int)`.

Run the following commands:

```
/* Generate the static library libsum.a */
gcc -c calc_sum.c -o calc_sum.o
ar rcs libsum.a calc_sum.o

/* Compile the main program statically */
gcc -static prog.c -L. -lsum -o prog
```

Command ref: http://www.adp-gmbh.ch/cpp/gcc/create_lib.html
