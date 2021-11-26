#include<stdio.h>

int main(int argc, char const *argv[])
{
    char Name[50];
    printf("Enter your Name: ");
    fgets(Name, sizeof(Name),stdin);
    fputs(Name,stdout);

    return 0;
}
