/*
Operator, Operands & Expression
=================================
a=b+c Expression
si=pa*r*t/100 Expression
ci=pa*pow(1+r/100,t)-pa

a+b this expression consist of a,b and +

in above expression a and b is called OPERANDs and + is called OPERATOR

Expression consists of operator and operands. Operators are symbols that defines operations.
and Operands are values on which operation is performed.
ex:
5+4 is an expression, in which + is an operator, 5 and 4 are operands on which operation will be performed.
Every expression yields a value.

According to requirement of operands there are three types of operators
========================================================================
1.Unary Operator->The operators which requires only one operand.
ex:
-5, &a, *a, ++a, --a

2.Binary Operator-> The operators which requires exact two operands.
5+7
5*9
3. Ternary operator-> The operator which require three operands.

According to operation there are many types of operators
=========================================================
1. Arithmetic Operator
There are 5 arithmetic operator in C
------------------------------------------
+ ->Addition
- ->Subtraction
* ->Multiplication
/ ->Division
% ->Modular Division
======================================
/ ->Performs division and gives Quotent as result
3/2 ->1(Quotent)
5/2 ->2(Quotent)
7/2  ->3(Quotent)

% -> Performs division and gives Remainder as Result
3%2 ->1(Rem)
5%2  ->1(Rem)
7%2 ->1(Rem)
13%10 ->3(Rem)
Note: %'s operands must be integer value.
13.0%5 ->Error

The Expression Containing Arithmetic Operator is called Arithmetic Expression. Arithmetic Expression 
always yields numeric value.
*/
/* write a c program that will accept two integer number.divide first number by second and 
print the quotent and remainder*/
#include<stdio.h>
int main()
{
	int n1,n2;
	int q,r;
	printf("Enter 1st number:");
	scanf("%d",&n1);
	printf("\nEnter 2nd number:");
	scanf("%d",&n2);
	//find quotent
	q=n1/n2;
	//find remainder
	r=n1%n2;
	printf("\nQuotent=%d and Remainder=%d",q,r);
	return 0;
}
 


