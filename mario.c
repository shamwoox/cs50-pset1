#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("Height: ");
    int height = GetInt();
    while(height < 0 || height > 23)
    {
       printf("Retry: ");
       height = GetInt();
    }
    for(int i = 2; i <= height+1; i++)
        {
            for(int j = height+1; j >= 1; j--)
            {
                if(i < j)
                {
                    printf(" ");
                }
                else
                {
                    printf("#");

                }
            }
            printf("\n");

        }
}
