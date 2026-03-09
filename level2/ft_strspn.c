#include <stdio.h>

int check(char s, const char *accept)
{
    while (*accept)
    {
        if (s == *accept)
            return 1;
        accept++; 
    }
    return 0;
}

size_t	ft_strspn(const char *s, const char *accept)
{
    int i = 0;
    int l = 0;
    while (s[i])
    {
        if (check(s[i], accept))
            l++;
        else
            break;
        i++;
    }
    return l;
    
}

int main()
{
    printf("%d\n", ft_strspn("111223abc", "123"));
}