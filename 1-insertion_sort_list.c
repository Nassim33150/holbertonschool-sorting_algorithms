#include "sort.h"
#include <stdio.h>

void insertion_sort_list(listint_t **list)
{
    int i;
    listint_t *curr;

    if (*list == NULL || (*list)->next == NULL)
    {
        // La liste est déjà triée ou vide, aucune action nécessaire
        return;
    }

    curr = *list;

    for (i = 0; curr; i++)
    {
        printf("%d\n", curr->n);
        curr = curr->next;
    }
}
