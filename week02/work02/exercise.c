/*
 * Name : Rinjani Samosir
 * NPM: 1606954994
 * Class: SI EKSTENSI 2016
 * Comment: What's going on
 */

#define LOOP 4

#include <stdio.h>

void main(){	
	int input = 5;
	int ll,kk=0;
	for  (ll=0;ll<LOOP;ll++){
		kk=kk+input;
	}
	printf ("%d times %d equal %d\n",input,LOOP,kk);		
}

