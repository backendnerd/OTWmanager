#include <stdio.h>
#include <stdlib.h>

int len(char string[])
{
    int i = 0;
    while(string[i] != '\0')
    {
        i++;
    }
    return i;
}


int main(int argc, char **argv[])
{
    char level[33];
    char password[99];
    FILE *fptr; // file pointer

    fptr = fopen("/home/d4wg/Desktop/c/OTWlogs/OTWlogs.txt", "a+");

    if(fptr == NULL){
        printf("Something went wront. Error code 1.\n");
        exit(1);
    }


    printf("Enter your current Level: ");
    scanf("%s", level);

    printf("Enter The Password for the Next Level: ");
    scanf("%s", password);

    fprintf(fptr, "%s", level);
    for(int i = 0; i <= 16 - len(level) ; i++)
    {
        fprintf(fptr, " ");
    }

    fprintf(fptr, "-    %s\n", password);
    fclose(fptr);

    return 0;
}