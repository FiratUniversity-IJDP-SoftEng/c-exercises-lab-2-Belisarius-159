//Hello World! My name is Yusuf Oral and this is my "C" exercise for YMT113 class
#include <stdio.h>

int main()
{
    const int SIZE = 10;
    int n, k, l;
    for (n = 1; n <= SIZE; n++)
    {
        for (k = 1; k <= SIZE; k++)
        {
            l = n * k;
            printf("%4d", l);
        }
        printf("\n");
    }
    
    return 0;
    
}
