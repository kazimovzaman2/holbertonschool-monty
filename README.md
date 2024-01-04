# Monty Interpreter

This is a simple stack-based interpreter written in C for the Monty scripting language. The interpreter supports fundamental stack operations and executes commands specified in Monty files.

## Table of Contents

- [Introduction](#introduction)
- [Usage](#usage)
- [Instructions](#instructions)
- [Example](#example)
- [Contributing](#contributing)

## Introduction

The Monty Interpreter is designed to execute Monty scripts, a simple scripting language that operates on a stack. It provides a set of basic operations to manipulate the stack elements.

## Usage

To use the Monty Interpreter, follow these steps:

1. Clone the repository:
   ```bash
   git clone https://github.com/kazimovzaman2/holbertonschool-monty
   cd monty-interpreter
   ```
2. Compile the code:
    ```bash
    gcc -Wall -Werror -Wextra -pedantic *.c -o monty
    ```
3. Run the interpreter:
    ```bash
    ./monty your-monty-file.m
    ```

## Instructions
The interpreter supports the following Monty script instructions:

- **push**: Pushes an element onto the stack.
- **pop**: Pops the top element from the stack.
- **pall**: Prints all elements in the stack.
- **pint**: Prints the value at the top of the stack.
- **swap**: Swaps the top two elements of the stack.

## Example
Consider the following Monty script (example.m):
```
push 1
push 2
push 3
pall
pop
pall
```
Run the script:
```bash
./monty example.m
```

The output should be:
```
3
2
1
2
1
```

## Contributing
If you'd like to contribute to the Monty Interpreter, please open an issue or submit a pull request.
