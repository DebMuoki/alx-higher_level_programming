#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * is_palindrome - checks if a singly linked list is a palindrome
 * @head: pointer to the head of the linked list
 * Return: 1 if the list is a palindrome, 0 otherwise
 */
int is_palindrome(listint_t **head)
{
	listint_t *slow_ptr = *head;
	listint_t *fast_ptr = *head;
	listint_t *prev_slow_ptr = NULL;
	listint_t *second_half = NULL;
	int is_palindrome = 1;  /* Assume it's a palindrome */

	if (*head == NULL || (*head)->next == NULL)
		return (is_palindrome);

	/* Find the middle of the list */
	while (fast_ptr != NULL && fast_ptr->next != NULL)
	{
		fast_ptr = fast_ptr->next->next;
		prev_slow_ptr = slow_ptr;
		slow_ptr = slow_ptr->next;
	}

	/* If the number of elements is odd, ignore the middle element */
	if (fast_ptr != NULL)
	{
		slow_ptr = slow_ptr->next;
	}

	/* Reverse the second half of the list */
	second_half = slow_ptr;
	prev_slow_ptr->next = NULL;
	reverse_list(&second_half);

	/* Compare the first half and the reversed second half */
	is_palindrome = compare_lists(*head, second_half);

	/* Restore the original list */
	reverse_list(&second_half);
	prev_slow_ptr->next = second_half;

	return (is_palindrome);
}

/**
 * reverse_list - reverses a linked list in-place
 * @head: pointer to the head of the linked list
 */
void reverse_list(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *current = *head;
	listint_t *next = NULL;

	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}

	*head = prev;
}

/**
 * compare_lists - compares two linked lists for equality
 * @list1: pointer to the head of the first linked list
 * @list2: pointer to the head of the second linked list
 * Return: 1 if the lists are equal, 0 otherwise
 */
int compare_lists(listint_t *list1, listint_t *list2)
{
	while (list1 != NULL && list2 != NULL)
	{
		if (list1->n != list2->n)
			return (0);
		list1 = list1->next;
		list2 = list2->next;
	}

	return (list1 == NULL && list2 == NULL);
}

