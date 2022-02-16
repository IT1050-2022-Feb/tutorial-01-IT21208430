/*Exercise 4 - Functions

Implement the three functions minimum(), maximum() and multiply() below the main() function.

Do not change the code given in the main() function when you are implementing your solution.*/

#include <stdio.h>

int maximum(int n1 , int n2); //declaring the function variables
int minimum(int n1 , int n2);
int multiply(int n1 , int n2);

int main() {
   int no1, no2; //declaring the variables
   printf("Enter a value for no 1 : "); //user input
   scanf("%d", &no1);
   printf("Enter a value for no 2 : "); //user input
   scanf("%d", &no2);
   printf("%d ", minimum(no1, no2)); //displaying the minimum
   printf("%d ", maximum(no1, no2)); //displaying the maximum
   printf("%d ", multiply(no1, no2)); // displaying the product
   return 0;
}

int maximum(int n1 ,int n2) //finding the maximum
{
  if(n1 <= n2)
  {
    return n2;
  }
  else
    return n1;

}

int minimum(int n1 ,int n2) //finding the minimum
{
  if(n1 <= n2)
  {
    return n1;
  }
  else
    return n2;

}

int multiply(int n1 ; int n2) // multiplication
{
  return n1 * n2 ;
}
