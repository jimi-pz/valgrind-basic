# Valgrind Usage Guide for Memory Leak Detection

This README provides a simple guide on how to use Valgrind to detect memory leaks in the C++ files contained within this repository. 
Valgrind is a powerful tool for memory debugging, memory leak detection, and profiling. 
The repository contains couple C++ files, each with some intentional memory leaks for practice and learning purposes.

## Getting Started

### Installing Valgrind

Before proceeding, ensure you have Valgrind installed on your system. Valgrind works on Linux and macOS. For Windows, consider using WSL (Windows Subsystem for Linux).

- **Linux (Ubuntu/Debian):**
    ```bash
    sudo apt-get update
    sudo apt-get install valgrind
    ```

- **macOS (using Homebrew):**
    ```bash
    brew install valgrind
    ```

### Compiling Your C++ Files

To use Valgrind, first, compile your C++ files with the `-g` option to include debugging information in the executable. For example, to compile a file named `example.cpp`, run:

```bash
g++ -g example.cpp -o example
```

### Use Valgrind 
```bash
# Common Valgrind Commands and Options

## Basic Memory Leak Detection:
valgrind --leak-check=full ./example

## Verbose Output:
# To get more detailed information about memory leaks, use the --verbose option.
valgrind --leak-check=full --verbose ./example

## Tracking Origins of Uninitialized Values:
# The --track-origins=yes option helps in identifying where uninitialised values come from.
valgrind --leak-check=full --track-origins=yes --show-reachable=yes  ./example

```