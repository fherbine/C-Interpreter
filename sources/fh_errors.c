/********************************************************/
/*                                                      */
/*     Project: C-interpreter       File: fh_errors.c   */
/*                                                      */
/*   Author: Félix HERBINET (felix.herbinet@yahoo.com)  */
/*                                                      */
/*                                                      */
/********************************************************/

#include "../includes/cinter.h"

void	fh_usage(void)
{
	ft_prints_fd(2, "usage: ./console\n");
	exit(EXIT_FAILURE);
}

void	fh_non_valid_command(t_command *command)
{
	ft_prints("\n\033[4;31;40mError:\033[0m %s(): is invalid !", command->console_function);
	ft_prints("\nType \033[3mhelp()\033[0m to see what you can do on this console.\n");
}
