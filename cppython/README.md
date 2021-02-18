# CPPython - Lexer/Parser

## Requirements

- Flex 2.6.4
- Bison 3.5.1
- GCC 9.3.0
- Make 4.2.1
- [Optional] Valgrind 3.15.0

## Usage

The first command clean the environment, compile the system again and generates all the binaries, outputs:

```bash
$ cd src
$ make clean; make
$ ./cppython tests/parser/valid_arithmetic_int_float.ppy
$ ./cppython tests/parser/invalid_assigns.ppy
```

### Check for memory leaks

Run valgrind to check for memory leaks:

```bash
$ make clean; make; make valgrind < tests/semantic/test_var_types.ppy
```

## Author

Name: Dayanne Fernandes da Cunha  
University ID: 130107191