#!/bin/bash
gcc -wall -pedantic -werror -wextra -std=gru89 -c *.c
ar -rc liball.a *.o
ranlib liball.a
