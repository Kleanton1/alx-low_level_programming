#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu -c *.c
ar -rc liball.a *.c
