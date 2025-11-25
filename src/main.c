#include<stdio.h>
#include<stdlib.h>

int main()
{
    int random_number=rand()%100+1;
    char player1[100],player2[100];         // character array (string) to store the names of the two players 
    int points1[3],points2[3];                     // integer array to store points in different rounds 
    int input1,input2,sum1=0,sum2=0;            // input1 stores input given by player1 and input2 stores input given by player2 
    printf("Enter the name of first player :");  // sum1 and sum2 stores final added scores of player1 and player2 respectively
    scanf("%s",player1);
    printf("Enter the name of second player :");
    scanf("%s",player2);
   
    for(int i=0;i<3;i++)                           // for loop used to repeat the process of taking input and assign points based on player's input
    {
        printf("\t\tROUND %d\n",i+1);
    
        printf("%s enter your number(between 1 to 100):",player1);
        scanf("%d",&input1);

        printf("%s enter your number(between 1 to 100):",player2);
        scanf("%d",&input2);
        points1[i]=pointcalculate(random_number,input1);
        points2[i]=pointcalculate(random_number,input2);
    }  
    printf("\nRandom number was : %d",random_number);  //Revealing the random number 
    printf("\n\n\t\t%s\t\t%s\n",player1,player2);

    for(int i=0;i<3;i++)           // for loop to add the points and also get a table like format 
     {
        printf("R%d\t\t%d\t\t%d\n",i+1,points1[i],points2[i]);  // \t to get even gap and get answer in alligned format
        sum1+=points1[i];                      // adding points in different rounds for player1
        sum2+=points2[i];                     // adding points in different rounds for player2
    }
    printf("TOTAL\t\t%d\t\t%d\n",sum1,sum2);

    if (sum1>sum2)                                // comparing points of both players to declare the winner 
    {
        printf("Congratulations %s you won ",player1);
    }
    else if(sum1==sum2)
    {
        printf("It's a draw ");
    }
    else
    {
        printf("Congratulations %s you won\n ",player2);
    }

    printf("\n\t\tThank You ");


    
    return 0;
}
