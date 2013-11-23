/*Glenn Sheils*/
/*December 19, 2012*/
/*Assignment for CS50, pset2*/

#include <stdio.h>
#include <cs50.h>
#include<string.h>
#include<stdlib.h>


int main (int argc, string argv[])
{
if (argc >= 3 || argc <= 1) //set conditions for starting # of arguments
{
printf("One argument, Please!\n"); 
return 1;
}

for (int i=0; i < strlen(argv[1]); i++)        //check key for numbers
                {
                    //printf("%d\n", strlen(argv[1]));
                    bool key_valid = true;
                    int j = argv[1][i];
                    if(( j >= 65 && j <= 90) || (j >= 97 && j <= 122)){ //loop through array looking for numbers
                    key_valid = true;
                    //printf("\n%i TRUE", j);
                    }
                        else if (( j <= 64 || j >= 123) || (j >= 91 && j <= 96))//only alpha characters allower in key
                    key_valid = false;
                    printf("\n%i FALSE", j);
                    return 1;
                    }

                }
    //printf("Give me a sentence to encrypt:\n");
    char* plain_text = GetString(); //Get string from user 

    int text_counter = 0;
    //int k = argv[1][text_counter];
    for (int i = 0, n = strlen(plain_text); i < n; i++) //iterate through sentence as test
        {
        int key = 0;
        int j = plain_text[i];
        int len  = strlen(argv[1]);
        //printf("%i\n",j); //printf("%c\n",plain_text[i]);
        if (j >= 65 && j <=90)  //Run loop for upppercase
            {
            if(( argv[1][text_counter] >= 65 && argv[1][text_counter] <= 90)) //if uppercase, reduce by 65 to get a=1 2=b etc
            {
            key = argv[1][text_counter] -65;
            }
            if(( argv[1][text_counter] >= 97 && argv[1][text_counter] <= 122)) //if lower case, same as above but reduce by 97
            {
            key = argv[1][text_counter] -97;
            }     
            int b = j + key;
            if (b >= 91)
            b = b - 26;
            printf("%c",b); //output encrypted character
            //printf("%i, =argv[1][text_counter]\n",argv[1][text_counter]);
            //printf("%i, =B\n",b);
            //printf("%i, =text counter\n",text_counter);
            //printf("%i, =KEY\n\n",key);
                if (text_counter == (len - 1)) //If reached end of key array, return to beginning
                {
                text_counter = 0;
                }
            else text_counter++; //otherwise increase counter after use
            }
        if (j >= 97 && j <= 122)  //Run loop for lowercase
            {
            if(( argv[1][text_counter] >= 65 && argv[1][text_counter] <= 90))
            {
            key = argv[1][text_counter] -65;
            }
            if(( argv[1][text_counter] >= 97 && argv[1][text_counter] <= 122))
            {
            key = argv[1][text_counter] -97;
            }
            int b = j + key;
            if (b >= 123)
            b = b - 26;
            printf("%c",b); //output encrypted character
            //printf("%i, =argv[1][text_counter]\n",argv[1][text_counter]);
            //printf("%i, =B\n",b);
            //printf("%i, =text counter\n",text_counter);
            //printf("%i, =KEY\n\n",key);
                if (text_counter == (len - 1))
                {
                text_counter = 0;
                }
            else text_counter++;
            }
        if (j >= 32 && j <=64) //pass non alpha characters straight through unchanged
        {
        printf("%c",j);
        }
        }
 printf("\n");       
return 0;
}
