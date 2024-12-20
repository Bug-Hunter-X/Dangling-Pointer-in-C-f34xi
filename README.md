# Dangling Pointer Bug in C

This repository demonstrates a common but subtle error in C programming: the dangling pointer.  A dangling pointer points to memory that has been freed or is no longer valid.  This can lead to unpredictable behavior and crashes.

The `bug.c` file contains the buggy code, while `bugSolution.c` provides a corrected version.

## How to Reproduce

1. Clone the repository.
2. Compile `bug.c` using a C compiler (e.g., GCC): `gcc bug.c -o bug`
3. Run the executable: `./bug`
4. Observe the unexpected output.

## Solution

The solution in `bugSolution.c` avoids the dangling pointer issue by managing memory carefully and ensuring that pointers always point to valid memory locations.