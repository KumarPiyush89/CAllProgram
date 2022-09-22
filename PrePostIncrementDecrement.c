/*
Increment /Decrement Operator continue...
As we know increment/Decrement operator can be used both side of its operand.
If increment/decrement operator is used before operand(left side of operand), it is
known as Pre-increment/decrement.
Ex: ++x; --x;
If increment /decrement operator is used after operand(right side of operand),
it is known as Post-increment/decrement.
Ex: x++; x--;

If pre or post increment/decrement opertors are used alone in an statement, then
there is no difference in pre or post increment/decrement.
ex:
++x;
or
x++;
both are same;

But Both are different if used in an expression having more operators
ex:
y=++x;
y=x++; both are different

int x,y=10;
x=++y*2;
x=y++*2; both will give different value;

If pre- increment/decrement operator is used in any expression, then first the operand is changed and then changed
value is used in expression.
If post-increment/decrement operator is used in any expression, then first the operand is changed 
but previous value of operand is used in expression.
Ex:
int x,y=10;
x=++y;
the value of x and y will be 11;
because pre increment is used in expression so, first valye of y will be increased and increased value will be used as
assignment value;

int x,y=10;
x=y++;

after this statement  the value of y will be 11 but the value of x will be 10;
bcz here post increment is used so the value of y will increase by 1 but the old value of y will be used in assignment.

int x,y=10;
x=++y*2;
x=? 22 22 22 22 22 22 22 
y=?22 22 22 22 22 11 22 

int x,y=1;
x=y++*2;
x=? 4 correct ans 2
y=? 2 correct Ans 2

int x,y=2,z=3;
x=++y*z++;

x=? 9 12	9 12	6
y=? 3          
z=? 4		3  4

Let we have two variables x and y having some values. 
write statements that store the thrice of y in x and increase the value of y by 1.

x=3*y;
y+=1;

or
x=3*y++;


y=++x;
it is equivalent to 
x=x+1;
y=x;

y=x++;
it is equivalent to 
y=x;
x=x+1;


*/
#include<stdio.h>
int main()
{
	int x,y=2,z=3;
	x=++y*z++;
	printf("\nx=%d,y=%d,z=%d",x,y,z);
	return 0;
}

