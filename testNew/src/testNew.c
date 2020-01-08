/*
 ============================================================================
 Name        : testNew.c
 Author      : kanurag@
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
int * fun();
int main(void)
{


    printf("c\n",* (fun());
    return 0;
}

int * fun()
{

	int charr[]={'a','b','c'};
	int *p=charr;
return p;

}
