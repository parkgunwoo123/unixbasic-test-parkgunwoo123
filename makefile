CC = gcc
CFLAG = -std=c11
OBJECTFILE = delete.o print.o register.o search.o phoneBookMain.o
all: phoneBookMain
%.o:%.c
	$(CC) -c $(CFLAG) $<

phoneBookMain: $(OBJECTFILE)
	$(CC) -o phoneBookMain $(OBJECTFILE)
clean:
	rm -f phoneBookMain $(OBJECTFILE)
