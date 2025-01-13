### * C - Doubly linked lists**

A **doubly linked list** is similar to a singly linked list but with an additional pointer in each node that points to the previous node. This allows traversal of the list in both directions: forward and backward.

### **Learning Objectives**

By the end of this project, you should be able to:

-   **Understand what a doubly linked list is**: A doubly linked list is a data structure where each node contains:
    
    -   Data (in this case, an integer).
    -   A pointer to the next node.
    -   A pointer to the previous node.
-   **Know how to use doubly linked lists**: Implementing functions to add, remove, and traverse doubly linked list nodes, both forwards and backwards.
    
-   **Start to find relevant resources independently**: Learn how to search for information and troubleshoot problems without relying too heavily on external help.

### **Data Structure**

For this project, you will use the following structure for the nodes of the doubly linked list:
```c
/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;

```

### **Explanation of the `dlistint_s` structure:**

-   **`n`**: An integer data field that holds the value for each node.
-   **`prev`**: A pointer to the previous node in the list. This is `NULL` for the first node.
-   **`next`**: A pointer to the next node in the list. This is `NULL` for the last node.

----------

### **General Requirements**

1.  **Allowed editors**: vi, vim, emacs.
2.  **Compilation**: Your files will be compiled using Python 3.8.5 on Ubuntu 20.04 LTS. Use the following command to compile:
    -   `gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -o list_program *.c`
3.  **File endings**: All files must end with a new line.
4.  **README.md**: A `README.md` file should be at the root of your project folder.
5.  **Betty style**: Your code should adhere to **Betty style**. This will be checked using `betty-style.pl` and `betty-doc.pl`.
6.  **No global variables**.
7.  **No more than 5 functions per file**.
8.  **Allowed functions**: You are only allowed to use `malloc`, `free`, `printf`, and `exit` from the standard C library. Functions like `puts`, `strdup`, `calloc`, `realloc`, and others are forbidden.
9.  **Prototypes**: All function prototypes should be included in the header file `lists.h`.
10.  **Include Guards**: Your header file should be protected by include guards.

### **Doubly Linked List Traversal**

The major advantage of a doubly linked list is the ability to traverse it in both directions:

-   **Forward traversal** using the `next` pointer.
-   **Backward traversal** using the `prev` pointer.

You can use this structure to iterate over the list from the last node to the first node, which can be beneficial in some situations.

----------

### **Use Cases for Doubly Linked Lists**

-   **Bidirectional traversal**: You can traverse in both directions, which is helpful when you need to move back and forth.
-   **Efficient deletion from both ends**: You can add or remove elements from both ends of the list efficiently (no need to traverse to the end as in a singly linked list).
-   **Memory overhead**: Doubly linked lists require more memory than singly linked lists because each node has an extra pointer (`prev`), but they provide greater flexibility.
