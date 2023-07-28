#include <string.h>
#include "lists.h"
#include <stdlib.h>


/**
* add_node - Include a new NODE at the start of a linked list
* @head: double pointers to list_t list
* @str: include new string to the node
*
* Return: Return address of the new element, or NULL when it fails
*/

list_t *add_node(list_t **head, const char *str)

{

list_t *new;

unsigned int len = 0;


while (str[len])

len++;


new = malloc(sizeof(list_t));

if (!new)

return (NULL);


new->str = strdup(str);

new->len = len;

new->next = (*head);

(*head) = new;


return (*head);

}
