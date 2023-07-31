This project tittled "0x13-more-singly-linked-lists" is carried out during the ALX SOFTWARE ENGINEERING PROGRAM, the learning objectives of this is to be able to know and also explain to anyone without the help of google or any assistant searrch engine.

The general objectives are to know the following....
1) know how to use the linked lists.
2) know how to start looking for the right source of information without too much help from anyone.
	The general requirements for this task are..
Only vi, vim, or emacs are the aloowed editors
All the files is compiled on ubuntu20.04 using gcc, and using the options -wall -werror -wextra -pedantic -stdgnu89
-All the files ended with a new line
-A readme file is present at the root of the directory
-The code uses the betty style
-Global variables is not used
Only malloc, free, exit are the only C standard libray function allowed, no used of printf, puts, calloc .. etc
-Putchar is pushed but not taken into account
-Prototype of all functions and the prototype of the putchar function is included in the header file called the list.h
-The header file is pushed
-All the header file is include guarded.
	Below is the data structure used for the project
/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * 
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;

	The task 0, withe file name 0-print_listint.c, Writes a function that prints all the elements of a listint_t list.
	The lask 1, with the file name "1-listint_len.c" Writes a function that returns the number of elements in a linked listint_t list.
	The task 2, withe the file name "2-add_nodeint.c" Writes a function that adds a new node at the beginning of a listint_t list.
	The task 3, with the file name "3-add_nodeint_end.c" writes  a function that adds a new node at the end of a listint_t list.
	The task 4 with the file name "4-free_listint.c" writes a function that frees a listint_t list.
	The task 5, with the file name "5-free_listint2.c" writes a function that frees a listint_t list.
	The task 6, with the file name "6-pop_listint.c" writes  a function that deletes the head node of a listint_t linked list, and returns the head node’s data (n).
	The task 7, with the file name "7-get_nodeint.c" writes a function that returns the nth node of a listint_t linked list.
	The task 8, with the file name "8-sum_listint.c" writes a function that returns the sum of all the data (n) of a listint_t linked list.
	The task 9, with the file name "9-insert_nodeint.c" writes a function that inserts a new node at a given position.
	The task 10, with the file name "10-delete_nodeint.c" writes a function that deletes the node at index index of a listint_t linked list.
	The task 11, withnthe file name "100-reverse_listint.c" writes a function that reverses a listint_t linked list.
	The task 12, with the file name "101-print_listint_safe.c" writes a function that prints a listint_t linked list.
	The task 13, with the file name "102-free_listint_safe.c" writes a function that frees a listint_t list.
And the last task which is task 14, with the file name "103-find_loop.c" write a function that finds the loop in a linked list.
