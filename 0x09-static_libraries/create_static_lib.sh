#!/bin/bash
gcc -wall -pedantic -werror -wextra -c *.c
ar -rc liball *.o
ranlib liball.a
