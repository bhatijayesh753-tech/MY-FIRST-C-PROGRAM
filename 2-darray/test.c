#include<stdio.h>
int main()
{
   int num[10]={1,2,3,4,5,6,7,8,9,10};
   int k=0,number[10];

   for (int i = 0; i < 10; i++)
   {
    
       if (num[i]%2==0)
       {
        number[k]=num[i];   // yha pr humne value store kr vayi ha 
        k++;
       }
   }

   for (int i = 0; i <k; i++)    // yah pr humne ne store value ko print kr vaya ha
   {
    printf("\t%d",number[i]);
   }
   
   
   
   
   

}