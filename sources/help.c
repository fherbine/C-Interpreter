#include "../includes/cinter.h"

void fh_help(char *function)
{
	if (ft_strcmp("quit", function) == 0 || ft_strcmp("quit()", function) == 0)
	{
		ft_prints("#------------------------------------------------------#\n");
		ft_prints("|                  HELP PAGE FOR QUIT()                |\n");
		ft_prints("|                                                      |\n");
		ft_prints("| quit(nothing)                                        |\n");
		ft_prints("|                                                      |\n");
		ft_prints("|  quit() or quit function permits exit the console.   |\n");
		ft_prints("|                                                      |\n");
		ft_prints("|        C - Interpreter V-0.1 - Felix Herbinet        |\n");
		ft_prints("#------------------------------------------------------#\n");
	}
	else if (ft_strcmp("do", function) == 0 || ft_strcmp("do()", function) == 0)
	{
		ft_prints("#------------------------------------------------------#\n");
		ft_prints("|                   HELP PAGE FOR DO()                 |\n");
		ft_prints("|                                                      |\n");
		ft_prints("| do([C language - instruction | C code])              |\n");
		ft_prints("|                                                      |\n");
		ft_prints("|  do() function permits to execute C code.            |\n");
		ft_prints("|                                                      |\n");
		ft_prints("|        C - Interpreter V-0.1 - Felix Herbinet        |\n");
		ft_prints("#------------------------------------------------------#\n");
	}
	else
	{
		system("clear");
		ft_prints("#------------------------------------------------------#\n");
		ft_prints("|                   HELP PAGE FOR ALL                  |\n");
		ft_prints("|                                                      |\n");
		ft_prints("| help([function-help | nothing])                      |\n");
		ft_prints("|                                                      |\n");
		ft_prints("|  Use help() or help to see some help pages like      |\n");
		ft_prints("| this for all the functions of the C - Interpreter    |\n");
		ft_prints("| console. help function without an argument           |\n");
		ft_prints("| parenthese or not will display this page, otherwise  |\n");
		ft_prints("| it will show the function passing to parameter.      |\n");
		ft_prints("|                                                      |\n");
		ft_prints("| List of availables functions on this program:        |\n");
		ft_prints("|                                                      |\n");
		ft_prints("|  - do(param) > help(do) : execute C instructions     |\n");
		ft_prints("|  - quit() > help(quit) : leave the console           |\n");
		ft_prints("|                                                      |\n");
		ft_prints("|        C - Interpreter V-0.1 - Felix Herbinet        |\n");
		ft_prints("#------------------------------------------------------#\n");
	}                                                                            
}                                                                                    
                                                                                     
                                                                                     
                                                                                     
                                                                                     
                                                                                     
                                                                                     
