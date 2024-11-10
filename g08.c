/*In a theme park, only people who meet specific criteria can experience the thrill of the roller coaster. 



Develop a program that takes age and height as inputs, determining eligibility using logical operators. If the age is 18 or older and the height is 150 cm or taller, output "Allowed!" Otherwise, output "Sorry, Not allowed."

Input format :
The first line of input consists of an integer, which represents the person's age.

The second line of input consists of an integer, which represents the person's height (in cm).

Output format :
The output displays either "Allowed!" or "Sorry, Not allowed" based on the given conditions.*/


#include<stdio.h>
int main(){
    
    int age,height;
    scanf("%d %d",&age,&height);
    
    if(age >= 18 && height >= 150)
    {
       printf("Allowed!\n"); 
    }
    else
    {
        printf("Sorry, Not allowed");
    }
    return 0;
}

