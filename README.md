# C++ Learning

This repository holds my learning curve for C++.

Every topic has its own folder, and the folders are numbered in the order I
learned them, so the structure follows the course progression.

## Structure

| # | Folder | Topics |
|---|--------|--------|
| 01 | [`01_Basics`](01_Basics) | Hello world, arithmetic operators, type conversion, user input, math functions |
| 02 | [`02_Conditionals`](02_Conditionals) | if statements, switch case, ternary operator, logical operators |
| 03 | [`03_Loops`](03_Loops) | while, do-while, for, nested loops, break & continue |
| 04 | [`04_Random`](04_Random) | random number generator, random events, number guessing game |
| 05 | [`05_Functions`](05_Functions) | functions, return, overloading, scope, recursion, templates, pass by value/reference, const parameters |
| 06 | [`06_Arrays`](06_Arrays) | arrays, sizeof, iteration, searching, bubble sort, fill, 2-D arrays |
| 07 | [`07_Strings`](07_Strings) | string methods |
| 08 | [`08_Pointers`](08_Pointers) | memory address, pointers, null pointers, dynamic memory |
| 09 | [`09_Structs`](09_Structs) | structs, passing structs as arguments |
| 10 | [`10_Enums`](10_Enums) | enums |
| 11 | [`11_OOP`](11_OOP) | objects & classes, constructors, constructor overloading, getters & setters, inheritance |
| 12 | [`12_Projects`](12_Projects) | calculator, banking program, rock paper scissors, quiz game, credit card validator, tic-tac-toe |

## How to compile and run

Each `.cpp` file is a standalone program with its own `main()`, so compile the
one you want to run:

```bash
g++ -std=c++17 path/to/file.cpp -o program
./program
```

Example:

```bash
g++ -std=c++17 01_Basics/Intro.cpp -o intro && ./intro
```

## Notes

- Compiled executables are ignored via `.gitignore`.
- The `.vscode/c_cpp_properties.json` config points at a local MinGW
  (`C:/MinGW/bin/g++.exe`) path, so update `compilerPath` for your machine.