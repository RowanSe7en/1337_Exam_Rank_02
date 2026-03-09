#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>

int	ft_list_size(t_list *begin_list)
{
    int len = 0;

    t_list *temp = begin_list;

    while (temp)
    {
        len++;
        temp = temp->next;
    }
    return len;
}

int main()
{

    t_list *a = malloc(sizeof(t_list));
    t_list *b = malloc(sizeof(t_list));
    t_list *c = malloc(sizeof(t_list));

    a->data = "hello";
    b->data = "hello";
    c->data = "hello";

    a->next = b;
    b->next = c;
    c->next = NULL;
    
    printf("%d\n", ft_list_size(a));

}