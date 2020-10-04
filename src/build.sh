#!/bin/bash

rm -f cppython lex.yy.c
flex cppython.lex
gcc lex.yy.c -lfl -o cppython