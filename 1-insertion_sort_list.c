#include "sort.h"
/**
 * insertion_sort_list - sorts a doubly linked
 * list of integers in ascending order using the Insertion sort algorithm
 * @list: list
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
listint_t *head = NULL, *tmp = NULL;

if (!list || !(*list) || !((*list)->next))
return;

head = (*list)->next;

while (head)
{
while (head->prev && head->n < (head->prev)->n)
{
tmp = head->prev;

if (tmp->prev)
(tmp->prev)->next = head;

else
{
*list = head;
}

head->prev = tmp->prev;

if (head->next)
(head->next)->prev = tmp;

tmp->next = head->next;
head->next = tmp;
tmp->prev = head;

print_list(*list);
}
head = head->next;
}
}
