FLAGS := -Wall -Wextra -Werror
OBJDIR := obj/
CC := cc

SRC_C := Colleen.c
OBJ_C := $(addprefix $(OBJDIR), $(SRC_C:.c=.o))
EXE_C := Colleen

SRC_G := Grace.c
OBJ_G := $(addprefix $(OBJDIR), $(SRC_G:.c=.o))
EXE_G := Grace

SRC_S := Sully.c
OBJ_S := $(addprefix $(OBJDIR), $(SRC_S:.c=.o))
EXE_S := Sully

all : $(EXE_C) $(EXE_G) $(EXE_S)

$(EXE_C) : $(OBJ_C)
	cc $(FLAGS) $(SRC_C) -o $(EXE_C)

$(EXE_G) : $(OBJ_G)
	cc $(FLAGS) $(SRC_G) -o $(EXE_G)

$(EXE_S) : $(OBJ_S)
	cc $(FLAGS) $(SRC_S) -o $(EXE_S)

$(OBJDIR)%.o: %.c
	@mkdir -p $(@D)
	$(CC) $(FLAGS) -o $@ -c $<

re: fclean all

clean :
	rm -rf $(OBJDIR)

fclean : clean
	rm -rf $(EXE_C)
	rm -rf $(EXE_G)
	rm -rf $(EXE_S)
