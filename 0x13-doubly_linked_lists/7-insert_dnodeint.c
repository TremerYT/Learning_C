#include "lists.h"
#include <stdlib.h>

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n) {
    dlistint_t *current, *new_node;
    unsigned int i = 0;

    if (h == NULL) {
        return NULL;
    }

    if (idx == 0) {
        return add_dnodeint(h, n);
    }

    new_node = malloc(sizeof(dlistint_t));
    if (new_node == NULL) {
        return NULL;
    }

    new_node -> n = n;

    current = *h;
    while (current != NULL && i < idx) {
        current = current->next;
        i++;
    }

    if (current == NULL && i != idx) {
        free(new_node);
        return NULL;
    }


    if (current == NULL && i == idx) {
        return add_dnodeint_end(h, n);
    }

    new_node->prev = current->prev;
    new_node->next = current;

    if (current->prev != NULL) {
        current->prev->next = new_node;
    } else {
        *h = new_node;
    }

    current->prev = new_node;

    return new_node;
}
