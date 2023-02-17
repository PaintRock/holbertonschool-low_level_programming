#bin/bash
gcc -std=gnu89 main.c -L. -lmy -o quote
gcc -c *.c
ar -rc liball.a *.o
ranlib liball.a
