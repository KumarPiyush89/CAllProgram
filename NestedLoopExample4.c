/*

*
**
***
****
*****
******

*/
#include<stdio.h>

int main()
{
	int a,b;
	for(a=1;a<=6;a++)
	{
		for(b=1;b<=a;b++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

/*
1.
1111111
2222222
3333333
4444444
5555555
6666666

2.

1
22
333
4444
55555
666666

3.
1
12
123
1234
12345
123456

4.
A
AB
ABC
ABCD
ABCDE

5.
AAAAA
BBBBB
CCCCC
DDDDD
EEEEE

6.
$$$$$$
$$$$$
$$$$
$$$
$$
$


*/