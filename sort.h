#ifndef SORT_H
#define SORT_H

#include <stdlib.h>
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void bubble_sort(int *array, size_t size);
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);
listint_t *swap_node(listint_t *node, listint_t **list);
void swap(listint_t **head, listint_t *node1, listint_t *node2);
void cocktail_sort_list(listint_t **list);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void shell_sort(int *array, size_t size);
void counting_sort(int *array, size_t size);
void merge_sort(int *array, size_t size);
void heap_sort(int *array, size_t size);
void radix_sort(int *array, size_t size);
void bitonic_sort(int *array, size_t size);
void quick_sort_hoare(int *array, size_t size);
void merge_subarr(int *subarr, int *buff, size_t front, size_t mid,size_t back);
void merge_sort_recursive(int *subarr, int *buff, size_t front, size_t back);
void merge_sort(int *array, size_t size);
void sort_deck(deck_node_t **deck);
void sort_suit(deck_node_t **deck);
void sort_val(deck_node_t **deck);
void swap(deck_node_t **deck, deck_node_t *card1, deck_node_t *card2);
int vcmp(const card_t *card1, const card_t *card2);
void heap_sort(int *array, size_t size);
void heapify(int *array, int idx, int idx2, size_t size);
#endif
