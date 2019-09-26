#include <stdio.h>
int main(void)
{
    for(int stack = 1; stack < 9; stack++)
    { 
        for (int x = 0; x < stack; x++)
        {
            printf("#");
        }    
           
        printf("\n");
    }
}