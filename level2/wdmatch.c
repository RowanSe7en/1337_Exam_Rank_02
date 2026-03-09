#include <unistd.h>

int len(char *s)
{
    int j = 0;
    while (s[j])
    {
        j++;
    }
    return j;
}
void pr(char *s)
{
    while (*s)
    {
        write(1, s, 1);
        s++;
    }
}

int main(int c, char **v)
{
    if (c == 3)
    {
        char *s1 = v[1];
        char *s2 = v[2];
        int i = 0;
        int j = 0;

        while (s1[i] && s2[j])
        {
            if (s1[i] == s2[j])
                i++;
            j++;
        }
        if (i == len(s1))
        {
            pr(s1);
        }
        
        
    }
    write(1, "\n", 1);
    
}