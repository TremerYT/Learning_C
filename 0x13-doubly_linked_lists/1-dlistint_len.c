#include "lists.h"

size_t dlistint_len(const dlistint_t *h) {
    unsigned int len = 0;
    while (h != NULL) {
        len++;
        h = h -> next;
    }

    return len;
}