#include<stdio.h>

int addition;
int substraction;
int division;
int multiplaction;
int option;

void menu();
int calculator();


void menu()
{
    while (1)
    {
        
        printf("\n1. Addition");
        printf("\n2. Substraction");
        printf("\n3. Division");
        printf("\n4. Multiplaction");
        printf("\n5.  Exit");
    
        printf("\nEnter any option from above");
        scanf("%d",&option);
        if(option<=5)
        break;
        
        else
        {
            printf("invalid choice ");
        }

     }    
}



int calculator()
{
    

        int a,b;

    printf("\nEnter any number in a and b: ");
    scanf("%d",&a);
    scanf("%d",&b);
    

     switch (option)
     {
    case 1:
        printf("\nadd: %d",a+b);
        break;
    case 2:
        printf("\nsub: %d",a-b);
        break;
        
    case 3:
        printf("\ndiv: %d",a/b);
        break;

    case 4:
        printf("\nmul: %d",a*b);
        break;
        
     
     default:
            printf("\nInvalid Option you entered");
        break;
     }

     return 0;

}

int main()
{

    menu();
    calculator();
   
    return 0;
}