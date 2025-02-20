#include "lists.h"

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index) {
    listint_t *temp;
    unsigned int i = 0;
    temp = head;

    while (temp != NULL && i < index) {
        temp = temp -> next;
        i++;
    }

    if (temp != NULL) {
        return temp;
    }
    else {
        return NULL;
    }
}