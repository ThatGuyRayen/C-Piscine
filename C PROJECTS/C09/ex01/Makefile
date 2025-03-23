NAME = libft.a
SRC_DIR = srcs
INC_DIR = includes
SRCS = $(SRC_DIR)/ft_putchar.c \
       $(SRC_DIR)/ft_swap.c \
       $(SRC_DIR)/ft_putstr.c \
       $(SRC_DIR)/ft_strlen.c \
       $(SRC_DIR)/ft_strcmp.c
OBJS = $(SRCS:.c=.o)
CC = cc
CFLAGS = -Wall -Wextra -Werror
AR = ar rc
RM = rm -f
all: $(NAME)
$(NAME): $(OBJS)
	@echo "Creating library: $(NAME)"
	$(AR) $(NAME) $(OBJS)
	@ranlib $(NAME)
	@echo "Library $(NAME) created successfully!"
%.o: %.c
	@echo "Compiling $<..."
	$(CC) $(CFLAGS) -I $(INC_DIR) -c $< -o $@
	@echo "$< compiled successfully!"
clean:
	@echo "Cleaning up object files..."
	$(RM) $(OBJS)
	@echo "Object files removed."
fclean: clean
	@echo "Removing $(NAME)..."
	$(RM) $(NAME)
	@echo "Library $(NAME) removed."
re: fclean all
	@echo "Rebuilding everything..."
