#include <unistd.h>
#include <stdio.h>

int is_there_a_char(char *v, int i)
{
    while (v[i])
    {
        if (v[i] != 32 && v[i] != 9)
            return 1;
        i++;
    }
    return 0;
    
}

int main(int c, char **v)
{
    if (c == 2)
    {
        int i = 0;
        while (v[1][i])
        {
            while (v[1][i] && (v[1][i] == 32 || v[1][i] == 9))
                i++;
            while (v[1][i] && (v[1][i] != 32 && v[1][i] != 9))
            {
                write(1, &v[1][i], 1);
                i++;
            }
            if (is_there_a_char(v[1], i))
                write(1, "   ", 3);  
        }
    }
    write(1, "\n", 1);
}