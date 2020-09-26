# Lexical Analyzer

## Requirements

- Flex 2.6.4
- GCC 9.3.0

## Usage

```bash
$ chmod +x build.sh
$ ./build.sh
$ ./ccpython tests/valid_1.ppy  # for valid test
$ ./ccpython tests/incorrect_1.ppy  # for invalid test
```

## Output examples

- Valid input 1:
  - Commands: ./build.sh && ./ccpython tests/valid_1.ppy
  - Output: 

    ```bash
    Python interpreter:

    line 1.  <func, 'def test(x, y):'>
    line 2.  <id, 1> <delimiter, '='> <integer, '1'>
    line 3.  <id, 2> <operator, '+'> <delimiter, '='> <integer, '1'>
    ```

- Invalid input 2:
  - Commands: ./build.sh && ./ccpython tests/invalid_1.ppy
  - Output: 

    ```bash
    Python interpreter:

    line 1.  <func, 'def test():'>
    line 2.  <id, 1> <delimiter, '='> <integer, '1'>
    line 3.  <id, 2> <operator, '+'> <delimiter, '='> <integer, '1'>
    line 4.  <id, 3> <delimiter, '='>
    LexerError: line 4, column 6, token '@' is not recognized
    ```

## Author

Name: Dayanne Fernandes da Cunha
University ID: 130107191