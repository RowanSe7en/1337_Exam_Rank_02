#include <stdlib.h>

char **ft_split(char *str)
{
    char **ptr = malloc(999);
    int i = 0;
    int j = 0;
    int k;

    while (str[i])
    {
        k = 0;
        ptr[j] = malloc(999);
        while (str[i] == ' ' || str[i] == '\t')
            i++;
        if (str[i] == '\0')
            break;
        while (str[i])
        {
            if(str[i] != ' ' && str[i] != '\t')
            {
                ptr[j][k] = str[i];
            }
            else
                break;
            i++;
            k++;
        }
        ptr[j][k] = '\0';
        j++;
    }
    ptr[j] = NULL;
    return ptr;
}
#include<stdio.h>
int main()
{
    char **ptr = ft_split("hello worled");
    int i = 0;
    while(ptr[i])
    {
        printf("%s\n",ptr[i]);
        i++;
    }
}