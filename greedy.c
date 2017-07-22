#include<stdio.h>
#include<cs50.h>

int main(void)
{
    printf("Oh hai! How much change is owed?\n");
    float change = GetFloat();
    while(change < 0)
    {
        printf("Retry: ");
        change = GetFloat();
    }

    int Qcount = 0;
    int Dcount = 0;
    int Ncount = 0;
    int Pcount = 0;

    while(change > 0.24)
    {
        Qcount++;
        change -= 0.25;
    }
    while(change > 0.09)
    {
        Dcount++;
        change -= 0.10;
    }
    while(change > 0.04)
    {
        Ncount++;
        change -= 0.05;
    }
    while(change > 0.009)
    {
        Pcount++;
        change -= 0.01;
    }
    int sum = Qcount + Dcount + Ncount + Pcount;
    //printf("%i Quarters | %i Dimes | %i Nickels | %i Pennies\n", Qcount, Dcount, Ncount, Pcount);
    printf("%i\n", sum);
}
