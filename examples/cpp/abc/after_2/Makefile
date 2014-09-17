CC=clang++
CFLAGS = -g -Wall -Weffc++
SOURCE=$(wildcard *.cpp)
EXE=run

.PHONY: $(EXE) clean
$(EXE):
	$(CC) $(CFLAGS) $(SOURCE) -o $@

clean:
	rm -fr $(EXE)
