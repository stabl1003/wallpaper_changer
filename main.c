#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    time_t rawtime;
    struct tm * timeinfo;
    char *wallpaper;

    time(&rawtime);
    timeinfo = localtime(&rawtime);

    int hour = timeinfo->tm_hour;

    if (hour >= 18 || hour < 6) {
        wallpaper = "/home/user/Pictures/night.jpg";
    } else {
        wallpaper = "/home/user/Pictures/day.jpg";
    }

    char command[512];
    snprintf(command, sizeof(command), "feh --bg-scale \"%s\"", wallpaper);
    system(command);

    return 0;
}
