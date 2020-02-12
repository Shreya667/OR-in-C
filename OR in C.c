#include <stdio.h>
#include <stdlib.h>

int main()
{
    char answer;

    printf("do you like cake? (Y/N) \n");
    scanf(" %c",&answer);

    if( (answer=='y')||(answer=='n'))
        {
        printf("Good choice");
    }
    else{
        printf("Tu jaa yrr");
    }
    return 0;
}
