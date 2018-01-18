/********************************************************/
/*                                                      */
/*     Project: C-interpreter       File: main.c        */
/*                                                      */
/*   Author: Félix HERBINET (felix.herbinet@yahoo.com)  */
/*                                                      */
/*                                                      */
/********************************************************/

#include "../includes/cinter.h"

int main(int argc, char **argv)
{
	(void)argv;
	if (argc == 1)
	{
		cinter();
	}
	else
		fh_usage();
	return (0);
}
