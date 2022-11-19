### Function pointers

Function pointers are a way to store the address of a function in a variable. This is useful when you want to pass a function as an argument to another function, or when you want to call a function from a function pointer.

#### Function pointers in C

In C, a function pointer is declared like this:

```c
return_type (*pointer_name)(argument_types);
```

For example, if you want to declare a function pointer that points to a function that takes an `int` and returns a `char`, you would declare it like this:

```c
char (*my_func_ptr)(int);
```
