#!/bin/bash

# Compile all .c files in the current directory
# shellcheck disable=SC2035
gcc -c *.c

# Create a static library called liball.a from all the .o files in the current directory
# shellcheck disable=SC2035
ar -rc liball.a *.o
