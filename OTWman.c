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


int main(int argc, char *argv[])
{
    if(argc < 3)
    {
        printf("\nUSAGE: ./%s LEVEL PASSWORD\n", argv[0]);
        return 1;
    }

    FILE *fptr; // file pointer

    fptr = fopen("/home/d4wg/Desktop/c/OTWlogs/OTWlogs.txt", "a+");

    if(fptr == NULL){
        printf("Something went wront. Error code 1.\n");
        exit(1);
    }



    fprintf(fptr, "%s", argv[1]);
    for(int i = 0; i <= 16 - len(argv[1]) - 1 ; i++)
    {
        fprintf(fptr, " ");
    }

    fprintf(fptr, "-    %s\n", argv[2]);
    fclose(fptr);

    return 0;
}