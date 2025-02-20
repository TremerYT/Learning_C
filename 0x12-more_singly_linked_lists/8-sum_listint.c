#include "lists.h"

int sum_listint(listint_t *head) {
    listint_t *current;
    unsigned int sum = 0;

    current = head;
    while (current != NULL) {
        sum += current -> n;
        current = current -> next;
    }

    return sum;
}