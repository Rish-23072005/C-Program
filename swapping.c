#include <stdio.h>
    //function declaration
    
    int sum (int, int);
    int main (void)
    {
        int total;
		printf("\n\n Function : a simple structure of function :\n");
		
        total = sum (5, 6);//function call
        printf ("The total is :  %d\n", total);
        return 0;
    }
    
    int sum (int a, int b) //function definition
    {
	    int s;
		s=a+b;
        return s; //function returning a value
    }