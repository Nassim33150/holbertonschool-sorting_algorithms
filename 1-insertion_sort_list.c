#include "sort.h"
#include <stdio.h>

void insertion_sort_list(listint_t **list)
{
    int i;

    listint_t *curr;
    listint_t *smallest;

    if (*list == NULL || (*list)->next == NULL)
    {
        // La liste est déjà triée ou vide, aucune action nécessaire
        return;
    }

    curr = *list;

    for (i = 0; curr; i++)
    {
        if (curr->n > curr->next->n)
        {

            while (smallest != NULL)
            {
                printf("%d ", curr->n);
                curr = curr->prev;
            }
        }
        curr = curr->next;
    }
}
