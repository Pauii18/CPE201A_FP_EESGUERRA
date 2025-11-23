#include <iostream>

return-value-type function-name (parameter -list)

{

declarations

statements

}

Sample 1:  a programmer-defined square function:

#include<stdio.h>

int square (int); /* function prototype */

int main()

{

     int x;

     for (x = 1; x <= 10; x++)

    printf("%d ", square(x));

     printf("\n");

 

     return 0;

}

/* function definition */

int square(int y)

{

     return y * y;

}
