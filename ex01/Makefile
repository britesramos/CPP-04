# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: sramos <sramos@student.codam.nl>             +#+                      #
#                                                    +#+                       #
#    Created: 2025/02/21 14:37:52 by sramos        #+#    #+#                  #
#    Updated: 2025/03/14 18:56:06 by sramos        ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = animal

CPPFLAGS = -Wall -Werror -Wextra -std=c++11

SRC = main.cpp\
	Animal.cpp\
	Dog.cpp\
	Cat.cpp\
	WrongCat.cpp\
	WrongAnimal.cpp\
	Brain.cpp\

# Define the object files and place them in the 'build' directory
OBJ = $(SRC:.cpp=.o)
OBJ_DIR = o_files
OBJ_PATH = $(OBJ:%=$(OBJ_DIR)/%)

# Default target to build the executable
all: $(NAME)

$(NAME): $(OBJ_PATH)
		@c++ $(CPPFLAGS) $(OBJ_PATH) -o $(NAME)

# Rule to compile .cpp to .o in the build directory
$(OBJ_DIR)/%.o: %.cpp
		@mkdir -p $(OBJ_DIR)  # Ensure the 'build' directory exists
		@c++ $(CPPFLAGS) -c $< -o $@

clean:
		@rm -rf $(OBJ_DIR)

fclean: clean
		@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
