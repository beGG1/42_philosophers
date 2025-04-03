SRCS		=	main.c \
				converter.c

SRCS_F		=	srcs/
OBJS_F		=	objs/

HEADER		= includes/philo.h

OBJS		=	$(SRCS:.c=.o)
OBJS_P		=	$(addprefix $(OBJS_F), $(OBJS))
NAME		= 	philo

CFLAGS = -Wall -Werror -Wextra

all:$(NAME)

$(OBJS_F)%.o: $(SRCS_F)%.c Makefile $(HEADER) | $(OBJS_F)
	@echo "Working on: $<"
	@$(CC) $(CFLAGS) -O3 -c $< -o $@ -I.

$(OBJS_F):
	@mkdir -p $(OBJS_F)

$(NAME): $(OBJS_P)
	@$(CC) $(CFLAGS) -O3 -o $(NAME) $(OBJS_P)
	@echo "Philo compiled successfully!"

clean:
	@rm -rf $(OBJS_F)
	@echo "philo objects removed!"

fclean:	clean
	@rm -rf $(NAME)
	@echo "philo removed!"

re:		fclean all

.PHONY:	all clean fclean re