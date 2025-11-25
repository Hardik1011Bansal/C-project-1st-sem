#include<stdio.h>
#include<stdlib.h>

int pointcalculate(int random_number,int input)  //function to calculate points in a round 
{
     int diff=random_number-input;

     if(diff==0)
         {
            return 50;
         }
        else if(diff>=-10 && diff<=10)
        {
            return 30;                        // if else to give points based on users input 
        }                                         
        else if(diff>=-20 && diff<=20)  
        {
            return 20; 
        }                                       // returns number of points given to the user 
        else  if(diff>=-30 && diff<=30)
        {
            return 10;
        }
        else 
        {
            int c=0;
            return c;
        }
    
}
