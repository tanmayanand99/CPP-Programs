//eg. of typecasting 2

#include<iostream.h>
#include<conio.h>

void main()
{
	void *vp;	//generic pointers
	char *cp;       //specific pointers
	vp=cp;		//OK
	//cp=vp;	//error
	//cp=char*(vp);	//error, CPP style
	cp=(char*)vp;	//OK, C style
}