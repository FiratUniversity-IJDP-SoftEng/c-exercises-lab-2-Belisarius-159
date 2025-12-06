//Hello World! My name is Yusuf Oral and this is my "C" assignment for YMT113 class
#include <stdio.h>

int main()
{
    
    for(int i = 1; i <= 10; i++)
    {
        int n = (i * 5);
        int k = 100 - ((i - 1) * 10 + 1);
        printf("%d\t%d\t%d\t\n", n, k, i);
    }
}

