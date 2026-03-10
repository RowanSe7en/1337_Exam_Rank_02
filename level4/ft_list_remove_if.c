#include "ft_list.h"
#include <stdlib.h>

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
    t_list *temp = *begin_list;
    t_list *pre = NULL;

    while (temp)
    {
        if (!(*cmp)(data_ref, temp->data))
        {
            if (pre)
                pre->next = temp->next;
            else
                *begin_list = temp->next;
            t_list *rm = temp;
            temp = temp->next;
            free(rm);
        }
        else
        {
            pre = temp;
            temp =  temp->next;
        }
    }
}