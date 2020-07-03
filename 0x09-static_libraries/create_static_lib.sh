#!/bin/bash
gcc -c *.c
ar rc libreria_static.a *.o
ranlib libreria_static.a
