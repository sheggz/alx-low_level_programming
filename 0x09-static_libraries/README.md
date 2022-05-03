STATIC LIBRARIES

Here, I build a static library from previously defined functions using 'ar' command.
The library is then indexed with 'ranlib'

libmy.a - a static library containing all the functions in main.h
create_static_lib.sh - a bash script that will create a static library named 'liball.a' from all the .c files in current directory
