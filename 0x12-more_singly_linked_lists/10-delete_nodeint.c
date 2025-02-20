#include "lists.h"

int delete_nodeint_at_index(listint_t **head, unsigned int index) {
    listint_t *temp, *prev;
    unsigned int i = 0;

    if (head == NULL || *head == NULL)
        return (-1);

    temp = *head;

    if (index == 0) {
        *head = temp -> next;
        free(temp);
        return 1;
    }

    prev = NULL;
    for (i = 0; temp != NULL && i < index; i++) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL)
        return (-1);

    prev -> next = temp -> next;
    free (temp);
    return 1;
}