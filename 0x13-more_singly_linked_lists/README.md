# Project 0x14. C - More singly linked lists
Responses for tasks within Project 0x14 in Course PP1200 at Holberton School.
### Tasks include code for the following functions:
0. size_t print_listint(const listint_t *h) - prints all elements of a a *listint_t* list.
1. size_t listint_len(const listint_t *h) - returns the number of elements in a linked *listint_t* list.
2. listint_t *add_nodeint(listint_t **head, const int n) - adds a new node at the beginning of a *listint_t* list.
3. listint_t *add_nodeint_end(listint_t **head, const int n) - adds a a new node at the end of *listint_t* list
4. void free_listint(listint_t *head) - frees a *listint_t* list.
5. void free_listint2(listint_t **head) - frees a *listint_t* list and sets the head to NULL.
6. int pop_listint(listint_t **head) - deletes the head node of a *listint_t* linked list, and returns the head node'ss data (n).
7. listint_t *get_nodeint_at_index(listint_t *head, unsigned int index) - returns the *n*th node of a *listint_t* linked list.
8. int sum_listint(listint_t *head) - returns the sum of all the data (n) of a *listint_t* linked list.
9. listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n) - inserts a new node at a given position
10. int delete_nodeint_at_index(listint_t **head, unsigned int index) - deletes the node at index *index* of a *listint_t* linked list
## Additional Project Notes
 - Header file **lists.h** contains all necessary preprocessor directives for functions to func, including function prototypes and structures.
 - Directory does include additional code for additional functions used to create the implementation of the numbered functions above (ex. **_putchar.c**).
 - All **number**-main.c files included were used to test the functions (numbers in main.c name correspond to the function with the same number in its name.
 - Files named by a single letter are the executables created for function testing.
## Contact
Jessica Loyd is the only contributor to this directory and she can be reached by email at 4239@holbertonschool.com.