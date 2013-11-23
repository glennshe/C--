#include <stdio.h>
#include <cs50.h>
#include<string.h>
#include<math.h>

int main(void)
{
    //get user input


    printf("Welcome to Change Maker CS50!\n");
     printf("Give me an amount to make change with:\n");  
    float input = GetFloat();
    int change;
    if (input < 0) {
    printf("A positive value please:\n");
    input = GetFloat();
    }

    if (input > 0 ) {
        input = input * 100;
      change = round(input);

      }



    int counter; 



    while(change >= .01 && change <= .99); 
       //printf("%f\n", input);


        int current;
        //Quarters first
        counter = change / 25;
        change = change - (counter * 25);

        //dimes
        current = change / 10;
        counter = counter + (change / 10);
        change = change - (10 * current);

        //nickels
        current = change / 5;
        counter = counter  += (change / 5);
        change = change - (5 * current);

        //pennies
        current = change / 1;
        counter = counter  += (change / 1);
        change = change - (1 * current);

        //display result
        printf("%i\n", counter);        





    return 0;  
}
