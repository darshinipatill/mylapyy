
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
    FILE *fptr;
    fptr = fopen(argv[1], "r");
    if (!fptr || argc != 2)
    {
        printf("error");
    }
    char ch;
    while ((ch = fgetc(fptr)) != EOF)
    {
        printf("%c", ch);
    }
    fclose(fptr);
    return 0;
}