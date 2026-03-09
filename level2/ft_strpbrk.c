#include <stdio.h>
#include <string.h>

int check(char s1, const char *s2)
{
    while (*s2)
    {
        if (s1 == *s2)
            return 1;
        s2++; 
    }
    return 0;
}

char	*ft_strpbrk(const char *s1, const char *s2)
{
    while (*s1)
    {
        if (check(*s1, s2))
            return (char *)s1;
        s1++;
    }
    
}

int main()
{
    char *s = "hello world";
    char *p = ft_strpbrk(s, "x");

    if (p)
        printf("%s\n", p);
}