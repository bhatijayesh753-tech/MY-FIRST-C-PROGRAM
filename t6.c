#include<stdio.h>

char team[5][20];
char player[5][20];
int  goal[5];
int match[5];

int TEAM();

int TEAM()
{
    for (int i = 0; i <5; i++)
    {
        printf("\nEnter your favourite Team%d: ",i+1);
        scanf("%s",&team[i]);

        printf("\nEnter your Favourite player: ");
        scanf("%s",&player[i]);

        printf("\nEnter player's goal this year: ");
        scanf("%d",&goal[i]);

        printf("\nmatches played by this team : ");
        scanf("%d",&match[i]);
    }
    
}


int display();

int display()
{

    for (int i = 0; i <5 ; i++)
    {
        printf("\nTeam = %s",team[i]);
        printf("\nPlayer = %s",player[i]);
        printf("\nGoal = %d",goal[i]);
        printf("\n\nMatch = %d",match[i]);
    }
}
    int main()
    {
       
        TEAM();
        display();



      return 0;
    }
    

