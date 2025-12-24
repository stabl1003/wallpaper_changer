flaigs=-Wall 
ldflags=

all: wallpaper_changer

wallpaper_changer: main.c
	cc ${flags} $^ -o $@ ${ldflags}
