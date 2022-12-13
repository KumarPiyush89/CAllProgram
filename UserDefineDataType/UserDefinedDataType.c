/*
Data Type
===========
Fundamenta data type: int, float, double, char, void (sign or size modifiers:signed, unsigned, short, long)
user defined data type: struct, union, enum, typedef


User Defined Data type
================================
Keyword: struct, union, enum, typedef

C has feature to create user defined data type that can store complex values using struct keyword.

ex:
Create a data type that can store a date

struct Date
{
	int day; //Member
	int month;
	int year;
};

Here datae is a new data type we can create variable of this data type as:

struct Date dob;
 
here dob is a variable of Date data type .. It can store a date value in the form of day month and year
 


Create a Data type that can store the name, class, roll and total marks of a student

struct Student
{
	char name[30];
	char clas[20];
	int roll;
	int total_marks;
};

We can create the variable of Student data type as:
struct Student s1,s2,s3;
 Here s1,s2 and s3 are three different variable of student type
 
 Syntax For createing new data type using struct
 ====================================================
 struct NewTypeName
 {
 	typeName memberName;
 	typeName memberName;
 	typeName memberName;
 	.
 	.
 	.
};

struct ->keyword
NewTypeName-> any valid C identifier
typeName -> any valid  C data type
memberName -> Any valid C identifier
*/