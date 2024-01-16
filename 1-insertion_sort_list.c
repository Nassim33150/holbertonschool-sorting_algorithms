#include "sort.h"
#include <stdio.h>

void insertion_sort_list(listint_t **list)
{

    listint_t *curr;

    if (*list == NULL || (*list)->next == NULL)
    {
        // La liste est déjà triée ou vide, aucune action nécessaire
        return;
    }

    curr = *list;

    while (curr->next != NULL)
    {
        if (curr->n > curr->next->n)
        {
            printf("%d\n", curr->next->n);
            return;
        }
        curr = curr->next;
    }
}
