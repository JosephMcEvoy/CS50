#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    int Total = round(get_float("Total: ") * 100);
    int Coins = 0;
    int Denoms[4] = {25,10,5,1};
    
    if (Total < 0) {
        printf("Enter a number greater than 0.\n");
        Total = round(get_float("Total: ") * 100);
    }
    
    while (Total >= 100) {
        Total = Total - 100;
    }

    for (int i = 0; i <= 3; i++) 
    {
        while (Total >= Denoms[i]) 
        {
            Total = Total - Denoms[i];
            Coins++;
        }
    } 
    
    printf("Change owed: %d\n", Coins);
}
