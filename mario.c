#include <stdio.h>
#include <cs50.h>
#include<string.h>

int main(void)
{
    //get user input
    int height = 0;
    do
    {
    //printf("Give me an integer between one and 23 inclusive:\n");  
    height = GetInt();

     }  
    while(height <= 0 ||height >= 24); 

        int spaces = 1;
        int hashes = 1;
        int width = height + 1;
        for (int n=height; n>0; n--)
         {
            spaces = width-hashes;
            hashes = hashes + 1;
            char line[800];
            strcpy(line, "\0");
                //append spaces
                for (int s=spaces; s>0; s--)
                {
                    strcat(line, " ");
                }
                //append hashes
                for (int h=hashes; h>0; h--)
                {
                    strcat(line, "#");
                }
                strcat(line, "\n");
                printf("%s", line);
                strcpy(line, "\0");



         } 
    return 0;  
}
