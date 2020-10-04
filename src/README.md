# CPPython - Lexer

## Requirements

- Flex 2.6.4
- GCC 9.3.0

## Usage

```bash
$ chmod +x build.sh
$ ./build.sh
$ ./cppython tests/valid_1.ppy  # for valid test
$ ./cppython tests/incorrect_1.ppy  # for invalid test
```

## Output examples

- Valid input 1:
  - Commands: ./build.sh && ./cppython tests/valid_1.ppy
  - Output: 

    ```bash
    CPPython interpreter:

    line 1.  <keyword, 'def'> <id, 1> <delimiter, '('> <id, 2> <delimiter, ','> <id, 3> <delimiter, ')'> <delimiter, ':'>
    line 2.  <id, 4> <delimiter, '='> <integer, '1'>
    line 3.  <id, 5> <operator, '+'> <delimiter, '='> <integer, '1'>
    ```

- Invalid input 2:
  - Commands: ./build.sh && ./cppython tests/invalid_1.ppy
  - Output: 

    ```bash
    CPPython interpreter:

    line 1.  <keyword, 'def'> <id, 1> <delimiter, '('> <delimiter, ')'> <delimiter, ':'>
    line 2.  <id, 2> <delimiter, '='> <integer, '1'>
    line 3.  <id, 3> <operator, '+'> <delimiter, '='> <integer, '1'>
    line 4.  <id, 4> <delimiter, '='>
    LexerError: line 4, column 13, token '@' is not recognized
    ```

## Author

Name: Dayanne Fernandes da Cunha  
University ID: 130107191