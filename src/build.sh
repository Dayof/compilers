#!/bin/bash

rm -f ccpython lex.yy.c
flex cppython.lex
gcc lex.yy.c -lfl -o ccpython