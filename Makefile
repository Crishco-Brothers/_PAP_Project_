CC = gcc
CFLAGS = -std=c99 -Wall -Wextra -Wpedantic -g
TARGET = mfms
OBJS = main.o input.o employees.o budget.o suppliers.o assets.o reports.o

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

main.o: main.c input.h employees.h budget.h suppliers.h assets.h reports.h
input.o: input.c input.h
employees.o: employees.c employees.h input.h
budget.o: budget.c budget.h input.h
suppliers.o: suppliers.c suppliers.h input.h
assets.o: assets.c assets.h input.h
reports.o: reports.c reports.h employees.h budget.h suppliers.h assets.h

clean:
	rm -f $(OBJS) $(TARGET)

.PHONY: all clean
all: $(TARGET)
