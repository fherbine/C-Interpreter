/********************************************************/
/*                                                      */
/*     Project: C-interpreter       File: cinter.h      */
/*                                                      */
/*   Author: Félix HERBINET (felix.herbinet@yahoo.com)  */
/*                                                      */
/*                                                      */
/********************************************************/

#ifndef CINTER_H
# define CINTER_H

# include "../sources/libft/libft.h"
# include <stdio.h>

typedef struct	s_command
{
	char	console_function[10];
	char	*c_instruction;
}		t_command;

void	cinter(void);

void	fh_usage(void);
void	fh_non_valid_command(t_command *command);

void	fh_help(char *function);

#endif
