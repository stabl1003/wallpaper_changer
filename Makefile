flaigs=-Wall 
ldflags=

all: clean wallpaper_changer

wallpaper_changer: main.c
	cc ${flags} $^ -o $@ ${ldflags}

clean:
	rm -f *.o wallpaper_changer
