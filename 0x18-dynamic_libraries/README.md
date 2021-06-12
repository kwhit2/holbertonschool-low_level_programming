# 0x18-dynamic_libraries

## Learning Objectives:

- What is a dynamic library, how does it work, how to create one, and how to use it
- What is the environment variable $LD_LIBRARY_PATH and how to use it
- What are the differences between static and shared libraries
- Basic usage nm, ldd, ldconfig

## Task Descriptions:

- holberton.h - header file containing all function prototypes
- libholberton.so - Dynamic library containing all the functions whose prototypes are listed in holberton.h
- 1-create_dynamic_lib.sh - script that creates a dynamic library called liball.so from all the .c files that are in the current directory.
- 100-operations.so - dynamic library that contains C functions that can be called from Python. Example in task contains more detail.
- 101-make_me_win.sh - two commands that could be run on the same server the Giga Millions program runs, in order to win the Jackpot
