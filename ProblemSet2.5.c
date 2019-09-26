#include <stdio.h>
int main(void)  
{
    for(int stack = 1; stack < 9; stack++) //Sets a loop, sets variable "stack" to 1, and increases by 1 every loop until it "stack" = 8
    { 
        for (int x = 0; x < stack; x++) //Sets another loop within the intial loop, sets variable "x" to 0 and and increases by 1 until "x" = "stack"
        {
            printf("#"); //Prints "#" every loop, until "x" = "stack". Every time the initial loop begins, the number of times"#" will be printed will be equal to the value of "stack" (which increases by 1 every loop until 8).
        }    
           
        printf("\n"); //Ends the 2nd loop when "x" = "stack" with a new line break. Every time the initial loop ends, the loop will begin again on the next line and print "#" 1 more time than in the previous line.
    }
}