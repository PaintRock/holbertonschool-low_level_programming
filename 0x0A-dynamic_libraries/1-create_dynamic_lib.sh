#!/bin/bash

gcc *.c -Wall -Werror -Wextra -pedantic -std=gnu89 
gcc *.o -shared -o liball.so
