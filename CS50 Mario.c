#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //Declaring my variables
int n, i, j, k;
    //Asking for height
do
{
    n = get_int("Height: ");
}
    //Condition to go on asking for height
while (n < 1 || n > 8);
    //Using the height put in, set the number of # and spaces required
for(i = 0; i < n; i++)
    {
        for(j = 0; j < n-1-i; j++)
            printf(" ");
        for(k = 0; k < i + 1; k++)
            printf("#");
        printf("\n");
    }

  
}