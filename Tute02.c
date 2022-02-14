/*Exercise 2 - Selection

Write a program to calculate the amount to be paid for a rented vehicle.

•	Input the distance the van has travelled
•	The first 30 km is at a rate of 50/= per km.
•	The remaining distance is calculated at the rate of 40/= per km.


e.g.

Distance -> 20
Amount = 20 x 50 = 1000


Distance -> 50
Amount = 30 x 50 + (50-30) x 40 = 2300*/

#include <stdio.h>

int main() 
{
  int distance;//declaring the variables
  float amount;

  printf("Enter the distance :"); //user inputs
  scanf("%d",&distance);

  if(distance>=30) //if condition
  {
    amount=1500+ (distance - 30)*40;//price
  }
  else
  {
    amount=distance*50;
  }

  printf("Total amount : %.2f\n",amount); //Displaying the total amount
  
  return 0;
} //End of the main function
