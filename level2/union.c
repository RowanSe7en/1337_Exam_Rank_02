#include <unistd.h>

int check(char c, int i, char *s)
{
    int j = 0;
    while (i > j)
    {
        if (c == s[j])
            return 0;
        j++;
    }
    return 1;
}

int main(int c, char **v)
{
    if (c == 3)
    {
        char *s1 = v[1];
        char *s2 = v[2];
        int i = -1;

        while (s1[++i])
        {
            if (check(s1[i], i, s1))
                write(1, &s1[i], 1);
        }
        int x = -1;
        while (s2[++x])
        {
            if (check(s2[x], x, s2) && check(s2[x], i, s1))
                write(1, &s2[x], 1);
        }
        
    }
    write(1, "\n", 1);
    
}