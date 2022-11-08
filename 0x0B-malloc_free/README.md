### C malloc() and free() functions

This is a simple implementation of the C malloc() and free() functions. It is
intended to be used as a learning tool, and is not intended to be used in
production code.

The code is written in C, and is intended to be compiled with a C compiler.
The code is written to be portable, and should compile on any platform that
supports C.

#### malloc()

The malloc() function allocates a block of memory of the specified size. The
memory is not initialized. The memory is allocated from the heap.

The malloc() function returns a pointer to the allocated memory, or NULL if
the memory could not be allocated.

- Example:

```c
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *p;

    p = malloc(10 * sizeof(int));
    if (p == NULL) {
        printf("malloc() failed\n");
        return 1;
    }

    printf("malloc() succeeded\n");
    free(p);
    return 0;
}
```

#### free()

The free() function frees a block of memory that was previously allocated with
malloc(). The memory is returned to the heap.

The free() function does not return a value.

- Example

```c
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *p;

    p = malloc(10 * sizeof(int));
    if (p == NULL) {
        printf("malloc() failed\n");
        return 1;
    }

    free(p);

    return 0;
}
```