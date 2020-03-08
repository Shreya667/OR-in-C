#include <stdio.h>
#include <stdlib.h>

int main()
{
    char answer;

    while(1)
    {
        printf("do you like cake? (Y/N) \nor press q to quit\n : ");
        scanf(" %c",&answer);
        if(answer=='y' || answer=='n' || answer=='Y' || answer=='N')
        {
            system("cls");
            if(answer=='y' || answer=='Y')
            {
                printf("Good choice\n");
            }
            else
            {
                printf("Tu jaa yrr\n");
            }
        }
        else
        {
            if(answer=='q' || answer=='Q')
                break;
            printf("Invalid Input");
        }
    }
    return 0;
}
