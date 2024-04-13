#!/bin/bash

# Compile all .c files into object files
gcc -c *.c

# Create the static library
ar rc liball.a *.o

# Index the static library for faster linking
ranlib liball.a

# Clean up: remove the object files
rm -f *.o
