/*
Flerovium Package Manager
-------------------------
By Corwin McKnight
*/
#include <stdio.h>
#include <stdint.h>
#include "common.h"
int main()
{
		int rargc = 0; //FIXME: Set to argc-1!
		if(rargc==0)
		{
				printf("Flerovium Package Manager v. %s\n","0.0.0.1"); //TODO: Replace string with literal in common.h
				printf("Valid options:\n");
				printf("install\t Installs a package\n");
				printf("remove\t Removes a package\n");
				printf("update\t Updates package list\n");
				printf("clean\t Cleans out the cache\n");
		}
		return 0;
}
