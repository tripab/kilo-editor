CFLAGS = -Wall -Wextra -pedantic -std=c11 -ggdb
LDFLAGS = 
OBJFILES = kilo.o terminal.o fileio.o rowops.o syntaxhl.o search.o editorops.o input.o output.o
TARGET = kilo

all: $(TARGET)

$(TARGET): $(OBJFILES)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJFILES) $(LDFLAGS)

clean:
	rm -f $(OBJFILES) $(TARGET) *~
