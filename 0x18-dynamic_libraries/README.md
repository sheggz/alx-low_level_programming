# Concept In View: Dynamic Linked Libraries
***

## Description
a library is a collection of compiled functions. We can make use of these functions\
in our programs without rewriting the same functionality. This can be achieved by\
either including the library code in our program (static library) or by linking\
dynamically at runtime (shared library).

dynamic libraries consist of separate files containing separate pieces of object code.\
These files are dynamically linked together to form a single piece of object code.\
Furthermore, dynamic libraries contain extra information that the operating system will 
need to link the library to other programs.

***
# Objectives
1) what is a dynamic library, how does it work, how to create one, and how to use it
2) What is the environment variable $LD_LIBRARY_PATH and how to use it
2) What are the differences between static and shared libraries
2) Basic usage nm, ldd, ldconfig
***

# Tasks
1) libdynamic.so - Create the dynamic library libdynamic.so containing all the functions listed 

1) 1-create\_dynamic\_lib.sh - *Create a script that creates a dynamic library called liball.so from all the .c files that are in the current directory.*

2) 100-operations.so - *Create a dynamic library that contains C functions that can be called from Python*
***

## Author
### **Oluwasegun Ikoya**
