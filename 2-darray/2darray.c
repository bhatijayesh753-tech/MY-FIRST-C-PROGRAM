#include<stdio.h>
int main()
{

    char studentname[20];
    char sub1[10],sub2[10],sub3[10],sub4[10],sub5[10];
    int marks[5],total = 0;
    
    printf("enter your name: ");
    scanf("%s",studentname);

    printf("enter your subject name: ");
    scanf("%s",sub1);
    scanf("%s",sub2);
    scanf("%s",sub3);
    scanf("%s",sub4);
    scanf("%s",sub5);
    
    printf("enter your marks: ");
    for (int i = 0; i <5; i++)
    {
        scanf("%d",&marks[i]);
        
        total+=marks[i];
    }
    

    printf("\n*********Student Report Card**********\n");

    printf("student name:=%s",studentname);
    printf("\nstudent marks: ");
    printf("\nsubject=%s | marks=%d",sub1,marks[0]);
    printf("\nsubject=%s | marks=%d",sub2,marks[1]);
    printf("\nsubject=%s | marks=%d",sub3,marks[2]);
    printf("\nsubject=%s | marks=%d",sub4,marks[3]);
    printf("\nsubject=%s | marks=%d",sub5,marks[4]);

    printf("\nstudent gets: %d ",total);

    printf("\npercentage of student is= %.2f",total/5.00);






    return 0;
}