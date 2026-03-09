#include <stdio.h>
#include <stdlib.h>

void fun(unsigned int a, unsigned int b)
{
    unsigned int div = 1;
    unsigned int last = 0;

    while (1)
    {
        
        if (div > a || div > b)
        {
            printf("%d", last);
            return;
        }
        else if (a % div == 0 && b % div == 0)
            last = div;
        div++;
    }

}

int main(int argc, char **argv)
{
    if (argc == 3)
    {
        fun(atoi(argv[1]), atoi(argv[2]));
    }
    printf("\n");
    
}