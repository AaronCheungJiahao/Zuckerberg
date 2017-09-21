OUT:=test.so
SRC:=test
all:$(OUT)

CFLAGS:=$(shell python3.5m-config --cflag)
LDFLAGS:= -shared $(shell python3.5m-config --cdflags) -Wl,-rpath=./

$(SRC): $(SRC).pyx

%.o:%.c
	gcc -c $^ $(CFLAGS) -o $@

$(OUT): $(SRC).o
	gcc -o $@ $(LDFLAGS) $^

clean:
	-@rm -f $(SRC).c
	-@rm -f *.o

