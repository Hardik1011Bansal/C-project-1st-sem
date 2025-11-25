#include<stdio.h>
#include<stdlib.h>

int pointcalculate(int random_number,int input)  
{
     int diff=random_number-input;

     if(diff==0)
         {
            return 50;
         }
        else if(diff>=-10 && diff<=10)
        {
            return 30;                         
        }                                         
        else if(diff>=-20 && diff<=20)  
        {
            return 20; 
        }                                        
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
