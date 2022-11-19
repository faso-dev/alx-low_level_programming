### Variadic functions

Variadic functions are functions that take a variable number of arguments. In C, variadic functions are declared with
a `...` in the parameter list. 

For example:
```c
    void print_ints(int args, ...) {
        va_list ap;
        va_start(ap, args);
        for (int i = 0; i < args; i++) {
            printf("argument: %d\n", va_arg(ap, int));
        }
        va_end(ap);
    }

    print_ints(3, 78, 115, 514);
```

### Variadic functions in C

In C, variadic functions are declared with a `...` in the parameter list. For example, if you want to declare a variadic function that takes an `int` and returns a `char`, you would declare it like this:

```c
char my_func(int n, ...);
```