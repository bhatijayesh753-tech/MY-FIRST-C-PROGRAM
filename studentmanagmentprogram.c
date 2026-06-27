#include<stdio.h>

int roll_number[100];
char name[100][50];
int id[100];
int class[100];
int count=1;

void entry()
{
    
    
        printf("//-----****** STUDENT MANAGMENT REPORT *****-----//\n");
        
        printf("\nEnter your NAME: ");
        scanf("%s",name[count]);

        printf("\nEnter your ROLL-NUMBER: ");
        scanf("%d",&roll_number[count]);

        printf("\nEnter your ID: ");
        scanf("%d",&id[count]);

        printf("\nEnter your CLASS: ");
        scanf("%d",&class[count]);

        count++;

        printf("\n***** STUDENT ADDED SUCCESSFULLY *****");
    
}

void display()
{


    if (count==1)
    {
        printf("\n***** NO STUDENT FOUND ******");
        return;
    }
    


    for (int i = 1; i < count; i++)
    {
        printf("\nNAME:           %s",name[i]);
        printf("\nROLL-NUMBER:    %d",roll_number[i]);
        printf("\nID:             %d",id[i]);
        printf("\nCLASS:          %d",class[i]);
        printf("\n---------------------\n");

    }
}

int main()
{
    while (1)
    {
        
    
    

    printf("\n//-----***** WELCOME TO STUDENT MANAGMENT ******-----//\n");

    int option;

    printf("\n1. ADD STUDENT: ");
    printf("\n2. STUDENT DETAILS: ");
    printf("\n3. EXIST:");

    printf("\nENTER ANY OPTION FROM ABOVE: ");        
    scanf("%d",&option);

    switch (option)
    {
    case 1:
        entry();
        break;

        
    case 2:
        display();
        break;

        
    case 3:
        printf("\n:::THANK YOU FOR VISITING:::");
        break;;
    
    default:
            printf("\n:: INVALID OPTION TRY AGAIN ::");
        break;
    }

    }

    return 0;
}