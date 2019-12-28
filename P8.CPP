//an eg. of structure to store data of an employee

#include<iostream.h>
#include<conio.h>

//VI-always declare struct globally as it can be accessed by all fns

struct emp
{
	//default access specifier is public
	int id;
	char name[10];
	float sal;
};

void main()

