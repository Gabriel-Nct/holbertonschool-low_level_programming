### **C - Singly linked lists**

A **singly linked list** is a data structure where each element (node) contains:

-   A piece of data (in this case, a string).
-   A pointer to the next node in the list.

The main goal of this project is to implement and manipulate such linked lists and understand when and why they are useful compared to arrays.

----------

### **Learning Objectives**

By the end of this project, you should be able to:

-   **Understand when to use linked lists versus arrays**: Linked lists are often more flexible than arrays because their size can dynamically grow and shrink, unlike arrays with fixed sizes. They allow efficient insertions and deletions, especially when modifying the middle of the list, but access times are slower compared to arrays.
    
-   **How to build and use linked lists**: You will learn how to create and manipulate linked lists, including adding new nodes, traversing the list, and removing nodes.
    

----------

### **Data Structure**

For this project, you will be using the following structure to represent the nodes in the linked list:
```c
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

```
### **Explanation of the `list_s` structure:**

-   **`str`**: A pointer to a dynamically allocated string (the data stored in the node).
-   **`len`**: The length of the string (`str`).
-   **`next`**: A pointer to the next node in the linked list, or `NULL` if this is the last node.

### **General Requirements**

1.  **Allowed editors**: vi, vim, emacs.
2.  **Compilation**: Your files should compile on Ubuntu 20.04 LTS using `gcc` with the following options:
    -   `-Wall -Werror -Wextra -pedantic -std=gnu89`.
3.  **File endings**: All files must end with a new line.
4.  **README.md**: A `README.md` file must be at the root of the project folder.
5.  **Betty style**: The code should adhere to **Betty style** guidelines, which will be checked using `betty-style.pl` and `betty-doc.pl`.
6.  **No global variables**.
7.  **No more than 5 functions per file**.
8.  **Standard Library Functions**: The only allowed functions from the C standard library are `malloc`, `free`, and `exit`. Functions like `printf`, `puts`, `calloc`, `realloc`, etc., are forbidden.
9.  **_putchar**: You may use `_putchar`, but do not push your own `_putchar.c` file (we will use our provided file).
10.  **Prototypes**: All function prototypes and the `_putchar` prototype should be declared in the header file `lists.h`.
11.  **Include Guards**: Your header files must be include guarded.

### **Singly Linked List Operations**

You will implement various functions to manipulate the singly linked list. Some common operations include:

-   **Adding a new node**: A function that adds a new node to the linked list.
-   **Printing the list**: A function to print the content of the list.
-   **Counting the nodes**: A function that counts the number of nodes in the list.

Here’s an example of how a simple function to print the list might look:
```c
#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list.
 * @h: pointer to the head of the list
 * Return: the number of nodes in the list
 */
size_t print_list(const list_t *h)
{
    size_t count = 0;

    while (h != NULL)
    {
        if (h->str == NULL)
            printf("[0] (nil)\n");
        else
            printf("[%u] %s\n", h->len, h->str);
        h = h->next;
        count++;
    }

    return count;
}

```
### **When to Use Linked Lists vs Arrays**

-   **Linked Lists**: Better for scenarios where the number of elements is unknown or changes frequently. They allow efficient insertions and deletions at any point.
-   **Arrays**: Better for fixed-size collections where elements can be accessed by index, and the number of elements is known or constant.
