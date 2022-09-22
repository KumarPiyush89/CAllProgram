/*
Character/Symbol Literal
========================
In C,C++ & Java character literals/Constants are written within single quotes .
Ex: 
a ->identifier
'a' -> Literal
5 -> numeric Literal
'5' ->Character Literal (its ASCII is 53)

Within single quotes must be  only one symbol
ex:
'a'
'b'
'7'
'-'
'('
' '
'' Error
'ab' Error

Escape Sequence
-----------------
We can write non printable or white space character using escape sequence in C

All escape sequence character bigins with \ and a symbol. it will represent a character
'\b' character literal for back space
'\t' Tab
'\n' new line
'\'' single quotes
'\\' Back Slash
*/
#include<stdio.h>
int main()
{
	/* crate a character variable and assign it with a*/
	char ch1;//put a in  it
	char ch2,ch3,ch4,ch5,ch6;
	ch1='a';
	//put symbol 5 in ch2
	ch2='5';
	//put tab in ch3
	ch3='\t';
	//put new line character in ch4
	ch4='\n';
	//put ' in ch5
	ch5='\'';
	//put \ in ch6
	ch6='\\';
	printf("ch1=%c\nch2\%c\nch3=%c\nch4=%c\nch5=%c\nch6=%c",ch1,ch2,ch3,ch4,ch5,ch6);
	return 0;
	
	
}
/*
A Z
B Y
C X

X C
Y B
Z A
*/

