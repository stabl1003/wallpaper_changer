flaigs=-Wall 
ldflags=

all:changer

changer: main.c
	cc ${flags} $^ -o $@ ${ldflags}
