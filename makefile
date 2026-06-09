CC = gcc
CFLAGS = -Wall -g

OBJS = main.o big3.o fact.o pal.o
TARGET = main

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

big3.o: big3.c big3.h
	$(CC) $(CFLAGS) -c big3.c

fact.o: fact.c fact.h
	$(CC) $(CFLAGS) -c fact.c

pal.o: pal.c pal.h
	$(CC) $(CFLAGS) -c pal.c

main.o: main.c big3.h fact.h pal.h
	$(CC) $(CFLAGS) -c main.c

clean:
	rm -f $(OBJS) $(TARGET)



