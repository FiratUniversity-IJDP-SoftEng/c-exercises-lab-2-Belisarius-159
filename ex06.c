//Hello World! My name is Yusuf Oral and this is my "C" exercise assignment for YMT113 class
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n = 100;
    int k = 50;
    int c = 0;
    for(int i = n; i >= k; i--)
    {
        if (i % 3 == 0)
        {
            c++;
        }
    }
   int *array = (int *)malloc(c * sizeof(int));
   int index = 0;
    
    for (int i = n; i >= k; i--) 
    {
        if (i % 3 == 0) 
        {
            array[index] = i;
            index++;
        }
    }
    printf("array of numbers divisible by 3 are: ");
    for (int i = 0; i < c; i++) 
    {
        printf("%d", array[i]);
        if (i < c - 1) 
        {
            printf(", ");
        }
    }
    printf("\n");
    free (array);
    array = NULL;
    return 0;
}
