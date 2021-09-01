RM = rm -f
CC = gcc
CFLAGS += -O2 -g 
LDFLAGS += -Wl,-rpath -Wl,/usr/local/lib -lfortune
LDLIBS +=

all: main

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

%: %.o
	$(CC) $(LDFLAGS) $^ $(LDLIBS) -o $@

main: main.o

clean:
	$(RM) *.o *~ core main

