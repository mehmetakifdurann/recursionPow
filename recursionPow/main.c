// This is a 'C' program to find power of a number using recursion

/*
 Example output:
    Input the base number : 4
    Input power: 3
---------------------------
    4 ^ 3 = 64.

 ! ! ! THE PROGRAM ENDS ! ! !
 
 */

// Created by Mehmet Akif Duran, January 11, 2024.

#include <stdio.h>

//funciton prototype.
double powerFunction(double, int);

int main(void){ // beginning of the main funciton.

    //Variable Decleration(s).
    double base;
    int power;
    double answer;
    
    //Executable statement(s).
    
    //getting inputs
    printf("Input the base number : \n");
        scanf("%lf",&base);
    printf("Input power : \n");
        scanf("%d",&power);
    
    
    printf("------------------\n");
    
    //function call
    
    answer = powerFunction(base,power);
    printf("%.2lf ^ %d = :  ", base, power);
    printf("%lf\n", answer);
    
    printf("! ! ! THE PROGRAM ENDS ! ! !\n");
    
    return 0;
} //end of the main function.


//function definition.
double powerFunction(double num1, int num2){
    
    //variable decleration(s).
    double result=1;
    
    //executable statment(s).
    
    //checking the conditions.
    
    if(num2==0)
        return 1;
    else if(num2 > 0)
        return num1 * powerFunction(num1, num2 -1);
    else
        return 1 / powerFunction(num1, - num2);
}//end of the function definition.





