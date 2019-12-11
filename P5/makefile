OBJ = obj
SRC = src
GCC = gcc
BIN = bin
INCLUDE = include

semantico: $(OBJ)/semantico.o $(OBJ)/main.o $(OBJ)/y.tab.o
	$(GCC) -o $(BIN)/semantico $(OBJ)/semantico.o $(OBJ)/main.o $(OBJ)/y.tab.o

$(OBJ)/main.o: $(SRC)/main.c
	$(GCC) -o $@ -c $(SRC)/main.c -I$(INCLUDE)

$(OBJ)/y.tab.o: $(SRC)/y.tab.c
	$(GCC) -o $@ -c $(SRC)/y.tab.c -I$(INCLUDE)

$(SRC)/y.tab.c: $(SRC)/semantico.y $(SRC)/lex.yy.c
	bison -v -d -o $@ $(SRC)/semantico.y

$(SRC)/lex.yy.c: $(SRC)/first.l
	lex -o $@ $(SRC)/first.l

$(OBJ)/semantico.o: $(SRC)/semantico_1.c
	$(GCC) -o $@ -c $(SRC)/semantico_1.c -I$(INCLUDE)

all:
	make semantico

clean:
	rm -rf $(BIN)/semantico $(OBJ)/* $(SRC)/y.tab.c $(SRC)/lex.yy.c $(SRC)/y.output $(SRC)/y.tab.h y.tab.c
