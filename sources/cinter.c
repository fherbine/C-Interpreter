/********************************************************/
/*                                                      */
/*     Project: C-interpreter       File: cinter.c      */
/*                                                      */
/*   Author: Félix HERBINET (felix.herbinet@yahoo.com)  */
/*                                                      */
/*                                                      */
/********************************************************/

#include "../includes/cinter.h"

static t_command	*read_command(void)
{
	int		i = 0, n = 1;
	char		*instruction_ln;
	char		*tmp;
	t_command 	*command = NULL;

	if (!(command = (t_command *)malloc(sizeof(t_command))))
		exit(EXIT_FAILURE);
	n = get_next_line(0, &instruction_ln);
	if (n > 0)
	{
		while (instruction_ln[i] && !ft_strchr(" (", instruction_ln[i]) && i < 10)
		{
			command->console_function[i] = instruction_ln[i];
			i++;
		}
		command->console_function[i] = '\0';
		i += (instruction_ln[i] != '\0') ? 1 : 0;
		if (!(tmp = ft_strdup(&(instruction_ln[i]))))
			exit(EXIT_FAILURE);
		i = ft_strlen(tmp);
		while (tmp[i] != ')' && i > 0)
			i--;
		tmp[i] = '\0';
		if (!(command->c_instruction = ft_strdup(tmp)))
			exit(EXIT_FAILURE);
		free(tmp);
	}
	return (command);
}

static void do_exec(char *c_inst)
{
	int fd = open("sources/tmp_exec/main.c", O_RDWR);
	
	ft_prints("\033[0;32;40mDO \t> \033[0m");
	ft_prints_fd(fd, "#include \"headers.h\"\nint main(void){%s;return(0);}", c_inst);
	close(fd);
	system("gcc -I./sources/tmp_exec sources/tmp_exec/main.c");
	system("./a.out && rm -rf a.out");
	system("echo \"\\c\" >  sources/tmp_exec/main.c");
	ft_prints("\n");
}

static void execute_command(t_command *command)
{
	if (strcmp(command->console_function, "quit") == 0)
		exit(EXIT_SUCCESS);
	else if (strcmp(command->console_function, "do") == 0)
		do_exec(command->c_instruction);
	else if (strcmp(command->console_function, "help") == 0)
		fh_help(command->c_instruction);
	else if (command->console_function[0] != '\0')
		fh_non_valid_command(command);
}

void		cinter(void)
{
	t_command *command;

	while (1)
	{
		ft_prints("\033[0;33;40mUser > \033[0m");
		command = read_command();
		execute_command(command);
		free(command->c_instruction);
		free(command);
	}
}
