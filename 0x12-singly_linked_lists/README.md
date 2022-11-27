### C Linked Lists

A linked list is a data structure that contains a group of nodes. Each node
contains data and a pointer to the next node in the list. The last node in
the list points to NULL. The first node in the list is called the head of
the list.

A linked list is a dynamic data structure. It can grow and shrink in size
during the execution of a program. The programmer does not need to know the
maximum size of the list in advance.

A linked list is a collection of nodes. Each node contains data and a
pointer to the next node in the list. The last node in the list points to
NULL. The first node in the list is called the head of the list.

### Singly Linked Lists

A singly linked list is a linked list in which each node points to the next
node in the list. The last node in the list points to NULL.

- Example: Singly Linked List

```c
#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;

```

### Doubly Linked Lists

A doubly linked list is a linked list in which each node points to the next
node in the list and the previous node in the list. The last node in the list
points to NULL. The first node in the list points to NULL.

### Circular Linked Lists

A circular linked list is a linked list in which the last node points to the
first node in the list. The first node in the list points to the last node in
the list.
