#include "sort.h"
#include <stdio.h>
#include <stdlib.h>

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
            listint_t *temp = curr->next;
            curr->next = curr->next->next;
            free(temp);
            return;
        }
        curr = curr->next;
    }
    printf("Aucun nombre inférieur au précédent trouvé.\n");
}
