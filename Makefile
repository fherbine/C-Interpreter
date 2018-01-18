###############################################################
#                                                             #
#      Project: C-Interpreter          File: Makefile         #
#                                                             #
#      Author: Félix HERBINET  (felix.herbinet@yahoo.com)     #
#                                                             #
#                                                             #
###############################################################

NAME = console
SRC_NAME = main.c fh_errors.c cinter.c help.c
SRC_PATH = sources
OBJ_NAME = $(SRC_NAME:.c=.o)
OBJ_PATH = sources/debug
SRC = $(addprefix $(SRC_PATH)/,$(SRC_NAME))
OBJ = $(addprefix $(OBJ_PATH)/,$(OBJ_NAME))
CC = gcc
CFLAGS = -Wall -Wextra
LIB_PATH = ./$(SRC_PATH)/libft/
LFLAGS = -L$(LIB_PATH) -lft
IPATH = includes
IFLAGS = -I$(IPATH)
VERSION = V - 0.1 | By Félix HERBINET 

all: begin $(NAME)

begin:
	@clear
	@mkdir $(OBJ_PATH)
	@cat div/welcome
	@echo "Building console:  \033[0;33;40m[\c"
	@make -C $(LIB_PATH)

$(NAME): $(OBJ)
	@$(CC) $(LFLAGS) -o $@ $?
	@echo "=]\033[0m \033[0;32;40m> Done.\033[0m\n"
	@echo ">>> Now you can execute the console typing './console'"

$(OBJ_PATH)/%.o: $(SRC_PATH)/%.c
	@echo "=\c"
	@$(CC) $(IFLAGS) $(CFLAGS) -c $? -o $@

clean:
	@rm -rf $(OBJ_PATH)
	@make -C $(LIB_PATH) fclean

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all begin clean fclean re
