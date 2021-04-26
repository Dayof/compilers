# c7: C for set's operations

## Requirements

- Flex 2.6.4
- Bison 3.7.5
- GCC 9.3.0
- Make 4.2.1
- [Optional] Valgrind 3.15.0

## Usage

The first command clean the environment, compile the system again and generates all the binaries, outputs:

```bash
$ cd src
$ make clean; make
$ ./c7 tests/parser/valid_1.c7
$ ./c7 tests/lexer/invalid_1.c7
```

### Check for memory leaks

Run valgrind to check for memory leaks:

```bash
$ make clean; make; export TEST_FILE=tests/parser/valid_1.c7; make valgrind
```

## Author

Name: Dayanne Fernandes da Cunha  
University ID: 130107191