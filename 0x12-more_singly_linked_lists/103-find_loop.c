#include "lists.h"

listint_t *find_listint_loop(listint_t *head)
{
    listint_t *slow = head, *fast = head;

    while (fast && fast->next)
    {
        slow = slow->next;         /* Move slow one step */
        fast = fast->next->next;   /* Move fast two steps */

        if (slow == fast) /* Loop detected */
        {
            slow = head; /* Reset slow to head */
            while (slow != fast)
            {
                slow = slow->next;
                fast = fast->next;
            }
            return (slow); /* Start of loop */
        }
    }

    return (NULL); /* No loop */
}
