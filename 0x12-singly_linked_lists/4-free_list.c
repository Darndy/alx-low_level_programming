#include <stdlib.h>
#include "lists.h"


/**
* free-list - freeing a list_t list.
* @head: lists of list_t to be freed
*/
void free_list(list_t *head)

{
list_t *temp;
while (head)

{

temp = head->next;
free(head->str);
free(head);
head = temp;
}

}
