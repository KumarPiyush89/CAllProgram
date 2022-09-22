/*
displaying message on screen in C
------------------------------------
printf()-  printf function is used to print any type of data on screen

printg message on screen
==================================
syntax:
printf("Your Message");

ex:
printf("Hello!");
it will print Hello on screen

printf("Hello! SHEETAL");

it will print hello! SHEETAL on screen

printing value of any variable on screen
-------------------------------------------
int x;
x=10;
print the vale of x on screen
 printf("x");
 
 it will print x on screen, not the value of x on screen
 
 printf() can print all fundamental type value on screen.
 to identify the type of value to be print printf() uses some symbols khown as control string.
 all control string begins with % 
 data type 			control string
 int				%d, %u
 float				%e,%f,%g
 double 			%lf
 char				%c
 string				%s
 
 printing value of variable
 ===================================
 printf("controlString",varName);
 
 int x;
 x=10;
 print the value of x on screen
 printf("%d",x);
 it will pint the value of x i.e. 10 on screen
 
 float p;
 p=9.67;
 printf("%f",p);
 it will print 9.670000 on screen
 
 printing message and value of variable on screen
 =======================================================
 printf("Message ControlString",varName);
 
 int x;
 x=5;
 printf("Hello Mr. Rakesh%d",x);
 it will print Hello Mr. Rakesh5 on screen
 */
 #include<stdio.h>
 int main()
 {
 	int x;
 	int y;
 	int z;
 	x=10;
 	y=8;
 	z=x*y;
 	printf("%d",z);
 	printf("\nProduct of two number is: %d",z);
 	printf("\n%d*%d=%d",x,y,z);
 	return 0;
 }
 
 