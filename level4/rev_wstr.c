#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int lenn(char *s)
{
    int i = 0;

    while (s[i])
        i++;
    return i;
}

void pr(char *s, int st, int end)
{
    int i = 0;

    while (st <= end)
    {
        write(1, &s[st], 1);
        st++;
    }
}

int start(char *s, int end)
{
    int st = end;

    while (st >= 0 && s[st] != 32)
        st--;
    return st;
}
//  012345678
// "Yo ar ddd"
int main(int c, char **v)
{
    if (c == 2)
    {
        char *s = v[1];
        int len = lenn(s) - 1;
        int st = 0;
        while (len >= 0)
        {
            st = start(s, len) + 1;
            pr(s, st, len);
            
            len = st - 2;
            if (len > 0)
                write(1, " ", 1);
        }
        
    }
    write(1, "\n", 1);
}