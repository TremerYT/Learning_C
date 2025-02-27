#include "lists.h"

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index) {
    dlistint_t *current;
    unsigned int i = 0;

    current = head;
    while (current != NULL && i < index) {
        current = current -> next;
        i++;
    }

    if (current == NULL) {
        return NULL;
    }
    else {
        return current;
    }

}