OBJ = obj
SRC = src
GCC = gcc
BIN = bin

syntactic: $(OBJ)/main.o $(OBJ)/y.tab.o
	$(GCC) -o $(BIN)/syntactic $(OBJ)/main.o $(OBJ)/y.tab.o

$(OBJ)/main.o: $(SRC)/main.c
	$(GCC) -o $@ -c $(SRC)/main.c

$(OBJ)/y.tab.o: $(SRC)/y.tab.c
	$(GCC) -o $@ -c $(SRC)/y.tab.c

$(SRC)/y.tab.c: $(SRC)/syntactic.y $(SRC)/lex.yy.c
	bison -v -d -o $@ $(SRC)/syntactic.y

$(SRC)/lex.yy.c: $(SRC)/lexicon.l
	lex -o $@ $(SRC)/lexicon.l

all:
	make syntactic

clean:
	rm -rf $(BIN)/syntactic $(OBJ)/* $(SRC)/y.tab.c $(SRC)/lex.yy.c
