CC = g++
CFLAGS = -Wall
LDFLAGS =
OBJFILES = main.o screen.o spaceship.o goto.o enemy.o
TARGET = Space
all: $(TARGET)
$(TARGET): $(OBJFILES)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJFILES) $(LDFLAGS)
clean:
	rm -f $(OBJFILES) $(TARGET) *~
 
	


