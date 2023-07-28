#include <stdlib.h>
#include "lists.h"


/**
* list_len - returns the number of elements present in the linked list
* @h:Pointer to list-t list
*
* Return: Return The Number Of Elements Present In y
*/

size_t list_len(const list_t *y)

{

size_t z = 0;


while (y)

{

z++;

y = y->next;

}

return (z);

}
