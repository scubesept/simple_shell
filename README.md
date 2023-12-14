# Project 0x16 C - Simple_Shell
* The C shell is an interactive command interpreter and a command programming language. This is a project made by Amodu Olaribigbe, Software Engineering students of ALX-SE. The project requires us to develop our own UNIX command interpreter.

## Table of contents

 - [File Structure]
 - [Requirements]
 - [Features]
 - [Builtins]
 - [Contributors]

## File Structure
--- | --- | ---|<br>
|['README.md'](./README.md) | A Descriptive Illustration about the ALX-SE Shell_Project |<br>
|['prompt.c'](./prompt.c) | A function that prints '$' to standard output |<br>
|['record_history.c'](./record_history.c) | This write file with user inputs |<br>
|['path_finder.c'](./path_finder.c) | Search In $PATH for executable command |<br>
|['string_handlers_functions_1.c'](./string_handlers_functions_1.c) | a function that writes the character to stdout |<br>
|['memory_handlers.c'](./memory_handlers.c) | this reallocates a memory block using malloc and free |<br>

## Requirements
This simple_shell project is designed to run on the Ubuntu 20.04 LTS using gcc, and can be compiled using the options -wall - werror -wextra -pedantic -std=gnu89
The code should use the Betty style
## Features
* Display a prompt and wait for the user to type a command.
* If an executable cannot be found, print an error message and display the prompt again.
* Handle errors
* Hand the EOF(Ctrl + D) condition.
* Handle the Ctrl +C to not terminate the shell.
* Handle th command line with arguments.
* Handle the PATH.
* Support the exit features.

## Builtins
* exit 'terminates the shell'
* env 'display the environment'

## Contributors:
* **Amodu Olaribigbe**   - [scubesept](https://github.com/scubesept)

