#include<stdio.h>

biggest2()
{
  int num1, num2;
  
    printf("Enter two integers :");
    scanf("%d%d", &num1, &num2);
    
    if (num1 > num2)
    { 
	    printf("%d is greater number", num1);
    }
    else
    {
	    printf("%d is greater number", num2);
    }
  // return 0;
 }
