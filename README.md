# Bello Script Language

Bello is a small scripting language interpreter implemented with C++,
Flex, and Bison. It supports running scripts from files or an interactive
REPL. Blocks are defined by indentation.

## Features

- Variables and arrays
- If / for / while control flow
- Function definitions
- Basic built-in I/O (see examples)

## Quick Start

### Build (scripted)

```
cd src
./build.sh
```

This produces `bello` in `src/`.

### Build (CMake)

```
mkdir -p build
cd build
cmake ..
cmake --build .
```

The executable is placed in `bin/`.

## Run

Run a script file:

```
./bin/bello bin/test.bello
```

Or run from the `src/` build:

```
./src/bello bin/test.bello
```

Start the REPL:

```
./bin/bello
```

## Examples

Example scripts are in `bin/`:

- `bin/test.bello`
- `bin/SelectionSortTest.bello`

## Notes

- On macOS, the build uses the system edit/readline library.
- If you modify the grammar, rerun `src/build.sh` to regenerate sources.

