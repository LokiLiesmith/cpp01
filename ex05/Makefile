# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mrazem <mrazem@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/17 19:33:14 by mrazem            #+#    #+#              #
#    Updated: 2025/12/17 22:13:47 by mrazem           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX			:= c++
CXXFLAGS	:= -Wall -Wextra -Werror -std=c++98

SRC			:= main.cpp Harl.cpp
NAME		:= harl
OBJDIR		:= obj
OBJ			:= $(SRC:%.c=$(OBJDIR)/%.o)


all: $(NAME)
$(NAME): $(OBJ)
	@$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)
	@echo "Compiled. \nrun with: ./$(NAME)"

$(OBJDIR)/%.o: %.cpp | $(OBJDIR)
	@$(CXX) $C(CXXFLAGS) -c $< -o $@

$(OBJDIR):
	@mkdir -p $(OBJDIR)

# Clean rules
clean:
	@rm -rf $(OBJDIR)

fclean: clean
	@rm -f $(NAME)
	
re: fclean all
.PHONY: all clean fclean re