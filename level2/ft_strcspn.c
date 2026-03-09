#include <stdio.h>

int check(char s, const char *reject)
{
    while (*reject)
    {
        if (s == *reject)
            return 0;
        reject++; 
    }
    return 1;
}

size_t	ft_strcspn(const char *s, const char *reject)
{
    int i = 0;
    int l = 0;
    while (s[i])
    {
        if (check(s[i], reject))
            l++;
        else
            break;
        i++;
    }
    return l;
    
}

int main()
{
    printf("%d\n", ft_strcspn("hello,world", ","));
}