#!/bin/bash
gcc -Wall _Wextra _Werror -pedantic -c _fPIC *.c
gcc -shared -o liball.so *.o
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
