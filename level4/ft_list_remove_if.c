#include "ft_list.h"
#include <stdlib.h>

void ft_list_remove_if(t_list **begin_list,
                       void *data_ref,
                       int (*cmp)(void *, void *))
{
	t_list *curr = *begin_list;
	t_list *pre = NULL;

	while (curr)
	{
		if (!cmp(curr->data, data_ref))
		{
			if (!pre)
			{
				*begin_list = curr->next;
			}
			else
			{
				pre->next = curr->next;
			}
			t_list *rm = curr;
			curr = curr->next;
			free(rm);


			
		}
		else
		{
			pre = curr;
			curr = curr->next;
		}
		
	}
	
}

// #include <stdio.h>

// int cmp(void *a, void *b)
// {
// 	return (*(int *)a - *(int *)b);
// }

// t_list *new_node(int value)
// {
// 	t_list *node = malloc(sizeof(t_list));
// 	int *data = malloc(sizeof(int));

// 	*data = value;
// 	node->data = data;
// 	node->next = NULL;
// 	return node;
// }

// void print_list(t_list *lst)
// {
// 	while (lst)
// 	{
// 		printf("%d -> ", *(int *)lst->data);
// 		lst = lst->next;
// 	}
// 	printf("NULL\n");
// }

// int main(void)
// {
// 	t_list *list = new_node(1);
// 	list->next = new_node(2);
// 	list->next->next = new_node(3);
// 	list->next->next->next = new_node(2);
// 	list->next->next->next->next = new_node(4);

// 	printf("Before:\n");
// 	print_list(list);

// 	int ref = 1;
// 	ft_list_remove_if(&list, &ref, cmp);

// 	printf("After removing 2:\n");
// 	print_list(list);

// 	return 0;
// }