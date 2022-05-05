DYNAMIC MEMORY

Here, I use the concept of Dynamic memory management with the focus on the "MALLOC" fuction and "FREE" function to release the dynamically allocated memory at the end of the function call.
"VALGRIND" is used to check for memory leaks incase i forget to use "FREE" at somepoint
Understanding the codes here requires firm understanding of POINTERS

0-create_array.c - a function that creates an array of chars, and initializes it with a specific char.
1-strdup.c -  a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.
2-str_concat.c - a function that concatenates two strings.
3-alloc_grid.c -  a function that returns a pointer to a 2 dimensional array of integers.
4-free_grid.c - a function that frees a 2 dimensional grid previously created by your alloc_grid function
100-argstostr.c - a function that concatenates all the arguments of your program.
101-strtow.c - a function that splits a string into words.
