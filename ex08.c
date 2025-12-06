//Hello World! My name is Yusuf Oral and this is my "C" exercise assignment for YMT113 class
#include <stdio.h>
#include <stdlib.h>
int main()
{
    const int N = 10;
    int numbers[N];
    int sum = 0;
    double avg;
    printf("enter 10 integer numbers\n");
    
    for (int i = 0; i < N; i++) 
    {
        printf("Enter number %d: ", i + 1); 
    
    if (scanf("%d", &numbers[i]) != 1)
        {
            printf("Invalid input. Please enter a valid integer.\n");
            while (getchar() != '\n'); 
                i--;
               
        }
    }
    for (int i = 0; i < N; i++) 
    {
        sum += numbers[i]; 
    }
    avg = (double)sum / N;\
    printf("Entered numbers: ");
    for (int i = 0; i < N; i++) 
    {
        printf("%d", numbers[i]);
    }
    printf("Total sum: %d\n", sum);
    printf("Total average: %.2lf\n", avg);
   return 0;

}
