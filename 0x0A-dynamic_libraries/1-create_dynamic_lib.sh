#!/bin/bash

gcc ./*.c -c -Wall -Werror -Wextra -pedantic -std=gnu89 -fPIC
gcc *.o -shared -o liball.so
