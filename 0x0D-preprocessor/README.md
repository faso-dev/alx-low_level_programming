### Preprocessor

The preprocessor is a tool that takes a source file and produces a new source file. The new source file is a copy of the
original source file with some modifications. The modifications are:

### Preprocessor in C

The preprocessor is a tool that takes a source file and produces a new source file. The new source file is a copy of the
original source file with some modifications. The modifications are:

* It removes comments.
* It replaces macros with their values.
* It includes other files.
* It removes lines that are not needed.
* It adds lines that are needed.
* It does some other things.

### Preprocessor in example

```c
#include <stdio.h>

#define PI 3.14159265358979323846

int main() {
    printf("PI = %f\n", PI);
    return 0;
}
```
