OUT:=myfunc.so
# SRC shoule be given without extension name.
SRC:=myfunc

all: $(OUT)

CFLAGS:=$(shell python3.5m-config --cflags)
LDFLAGS:= -shared $(shell python3.5m-config --ldflags) -Wl,-rpath=./ 

$(SRC).c:$(SRC).pyx
	cythonize -3 $^

%.o:%.c
	gcc -c $^ $(CFLAGS) -o $@

$(OUT):$(SRC).o
	gcc -o $@ $(LDFLAGS) $^

clean:
	-@rm -f $(SRC).c
	-@rm -f *.o

