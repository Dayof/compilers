# CPPython - Lexer/Parser

## Requirements

- Flex 2.6.4
- Bison 3.5.1
- GCC 9.3.0

## Usage

```bash
$ make
$ ./cppython tests/parser/valid_1.ppy  # for valid test
$ ./cppython tests/parser/invalid_1.ppy  # for invalid test
```

## Output examples

- Valid input 1:
  - Commands: ./cppython tests/parser/valid_1.ppy
  - Output: 

    ```bash
		Welcome to CPPython interpreter:
		Lexer/parser:

		line 1. Token: <integer, '1'>

		Creating integer expression node: 1
		Token: <add, '+'>
		Assign expression.
		Token: <integer, '1'>

		Creating integer expression node: 1

		line 2. 
		Assign expression.

		Creating binary expression node: 1 + 1
		1

		AST created.

		Lexer and parser finished.
    ```

- Invalid input 2:
  - Commands: ./cppython tests/parser/invalid_1.ppy
  - Output: 

    ```bash
		Welcome to CPPython interpreter:
		Lexer/parser:

		line 1. Token: <integer, '1'>

		Creating integer expression node: 1

		LexerError: line 1, column 2, token '^' is not recognized
    ```

## Author

Name: Dayanne Fernandes da Cunha  
University ID: 130107191
