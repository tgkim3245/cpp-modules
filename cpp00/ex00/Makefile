NAME = megaphone

SRCS =	megaphone.cpp
OBJS = $(SRCS:.cpp=.o)

CXX = c++
INCLUDES = 
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
HEADERS = 

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $@

%.o: %.cpp $(HEADERS)
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re