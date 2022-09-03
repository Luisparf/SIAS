PROG_NAME=sias

C_COMP=gcc

FONTES=$(wildcard *.c) 

HEADERS=$(wildcard *.h)

FLAGS=-Wall -pedantic -lm -g

.PHONY:all clean tar


all: $(PROG_NAME)
   
$(PROG_NAME): $(FONTES:.c=.o)
	@$(C_COMP) -o $@ $^ $(FLAGS)

run:
	@./$(PROG_NAME)

%.o: %.c $(HEADERS)
	@$(C_COMP) -c $< -o $@

clean:
	@rm -f *.o $(PROG_NAME) *~

tar:
	@tar cvjf $(PROG_NAME).tar.bz2 $(FONTES) $(HEADERS)
