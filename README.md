# wallpaper_changer
A code written in `C` that changes wallpaper depending on time
# Requirements
`i3wm`, `feh`, `gcc`
# Install
Wallpaper_changer should be easy to run in terminal using `g++ main.c -o wallpaper_changer`.If the code doesn't run make sure yo have feh installed.
# How to use
Wallpaper_changer uses two files placed in `Pictures` folder, `day.jpg` and `night.jpg`. The code will change the i3 backround based on the time.
You can run the program with `./wallpaper_changer` or set the code to run in `~/.config/i3/config` with `exec --no-startup-id  ~/wallpaper_changer`.
