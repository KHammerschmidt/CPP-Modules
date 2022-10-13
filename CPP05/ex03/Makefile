# **************************************************************************** #
#   COLORS                                                                     #
#   COM_COLOR=blue, OBJ_COLOR=green, ERROR_COLOR=red, WARN_COLOR=yellow        #
# **************************************************************************** #
ERROR_COLOR := 		\033[0;31m
OBJ_COLOR   := 		\033[0;32m
WARN_COLOR  := 		\033[0;33m
COM_COLOR   := 		\033[0;34m

# **************************************************************************** #
#   VARIABLES                                                                  #
# **************************************************************************** #
NAME 		:= 		intern


CXX			:=		c++
CXXFLAGS	:=		-Wall -Werror -Wextra -std=c++98 -Iheader
DEPFLAGS	 =		-MMD -MF $(DDIR)/$*.d

INCLUDES	:=		./incl/
VPATH		:=		./ srcs/
SRCS		:=		main.cpp Bureaucrat.cpp Form.cpp ShrubberyCreationForm.cpp \
					RobotomyRequestForm.cpp PresidentialPardonForm.cpp Intern.cpp

ODIR		:=		./obj/
OBJS		:=		$(SRCS:%.cpp=$(ODIR)%.o)

DDIR		:=		$(ODIR)deps
DEPS		:=		$(SRCS:%.cpp=$(DDIR)%.d)

# *************************************************************************** #
#   RULES                                                                      #
# **************************************************************************** #
.PHONY:	all clean fclean re

$(NAME): $(ODIR) $(DDIR) $(OBJS)
	@$(CXX) $(CXXFLAGS) $(OBJS) -o $@
	@echo "$(COM_COLOR)...creating: $(NAME)"

$(ODIR)%.o: %.cpp $(DDIR)%.d
	@$(CXX)	$(CXXFLAGS) -I$(INCLUDES) $(DEPFLAGS) -c $< -o $@

$(ODIR):
	@echo "$(OBJ_COLOR)...compiling $(NAME)-object-files..."
	@mkdir -p $@

$(DDIR):
	@mkdir -p $@
	@echo "$(OBJ_COLOR)...creating dependencies..."

all: $(NAME)

clean:
	@rm -rf $(DDIR) $(ODIR) $(OBJS)
	@echo "$(ERROR_COLOR)...$(NAME)-object files deleted"

fclean: clean
	@rm -rf $(NAME)
	@echo "$(ERROR_COLOR)...removing $(NAME)"

re: fclean all

$(DEPS):
-include $(DEPS)