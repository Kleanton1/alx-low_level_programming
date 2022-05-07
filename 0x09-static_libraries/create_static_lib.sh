#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu -c *.c
ar -rc liball.a *.o
ranlib liball.a
