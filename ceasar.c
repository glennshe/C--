/*Glenn Sheils*/
/*December 12, 2012*/
/*Assignment for CS50, pset2*/

#include <stdio.h>
#include <cs50.h>
#include<string.h>
#include<stdlib.h>


int main (int argc, string argv[])
{
if (argc >= 3 || argc <= 1) //set conditions for starting
{
printf("One argument, Please!\n"); 
return 1;
}

if (argv)
{
int k = atoi(argv[1]); //convert augument to int
k = k % 26; // reduce key if over 26


//printf("Give me a sentence to encrypt:\n"); 
char* plain_text = GetString(); //Get string from user

for (int i = 0, n = strlen(plain_text); i < n; i++) //iterate through sentence as test
{
int j = plain_text[i];
//printf("%i\n",j); //printf("%c\n",plain_text[i]);
if (j >= 65 && j <=90) //Run loop for upppercase
{
int b = j + k;
if (b >= 91) { //handle wrapping
b = b - 26;
}
printf("%c",b); //output encrypted character
}
if (j >= 97 && j <=122) //run loop for lowercase
{
int c = j + k;
if (c >= 123) {
c = c- 26;
}
printf("%c",c);
}
if (j >= 32 && j <=64) //pass non alpha characters straight through unchanged
{
printf("%c",j);
}
}
}
printf("\n"); //final sanity test
return 0;
}
