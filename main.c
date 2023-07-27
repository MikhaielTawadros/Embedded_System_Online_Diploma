/*
 * main.c
 *
 *  Created on: Jul 25, 2023
 *      Author: Mikhaiel T
 */
#include "stdio.h"
int main ()
{
	int width , length , Area ;
	printf ("if you want to calculate the area of a square you have to enter the length and the width \n") ;
	fflush(stdout);
	printf ("Enter the value of width \n\t");
	fflush(stdout);
	scanf("%d", & width);
	printf ("Enter the value of Length \n\t");
	fflush(stdout);
	scanf ("%d", & length) ;
	Area = width * length ;
	printf("Area of sqaure = %d", Area);

	return 0 ;
}

