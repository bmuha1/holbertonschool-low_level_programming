#ifndef SORT_H
#define SORT_H

#include <stdio.h>
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

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);

void shell_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);
void counting_sort(int *array, size_t size);
void merge_sort(int *array, size_t size);
void heap_sort(int *array, size_t size);
void radix_sort(int *array, size_t size);
void bitonic_sort(int *array, size_t size);
void quick_sort_hoare(int *array, size_t size);

void forward_swap(listint_t **list, listint_t **end, listint_t **current);
void backward_swap(listint_t **list, listint_t **end, listint_t **current);
void heapify_array(int *arr, size_t size);
void shakedown(int *arr, size_t start, size_t end, size_t size);
int get_max(int *array, size_t size);
void partition(int *arr, size_t size, int lower_limit, int limit);
int sort(int *arr, size_t size, int lower_limit, int limit);
void swap(int *a, int *b, size_t size, int *arr);
void super_count_sort(int *arry, size_t size, size_t new_size, int has_zero);
void merge_recursive(int *array, int *temp, int l, int r);
void merge(int *array, int *temp, int l, int m, int r);
void bitonic_recursive(int *array, size_t now, size_t size, int low, int dir);
void bitonic_merge(int *array, size_t now, size_t size, int low, int dir);
void partition_hoare(int *arr, size_t size, int lower_limit, int limit);
int sort_hoare(int *arr, size_t size, int lower_limit, int limit);

#endif /* SORT_H */
