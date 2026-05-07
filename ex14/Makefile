# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lbuscaro <lbuscaro@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/04/07 15:09:01 by lbuscaro          #+#    #+#              #
#    Updated: 2026/05/07 11:49:37 by lbuscaro         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Target
NAME = sed

# Tools
CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98
GDB = -g
RM = rm -rf

# Directories
BUILD_DIR = build
SRC_DIR = src

# Source files
FILES = main.cpp

# Fullpath for source and objects
SRC := $(addprefix $(SRC_DIR)/,$(FILES))
OBJ := $(addprefix $(BUILD_DIR)/,$(FILES:.cpp=.o))

# Rules
all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

$(BUILD_DIR)/%.o: $(SRC_DIR)/%.cpp | $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) -c $< -o $@

$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

debug: CXXFLAGS += -g
debug: fclean all

clean:
	$(RM) $(BUILD_DIR)

fclean: clean
	$(RM) $(NAME)
	$(RM) *.replace

re: fclean all

.PHONY: all clean fclean re debug
