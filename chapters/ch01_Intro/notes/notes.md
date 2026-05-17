# CHAPTER 1

  Master the basic variables, constants, arithmetic flow, functions and the rudiments of input and outputs 

---

- The only way to learn a new programming language is by writing programs in it 

----
Any programming language consists of functions and variables:

A function contains statements that specify the computing operation to be done and variables store values during operations. Functions in C are similar to to sub-routines and functions in fortran and likewise to procedures and functions in pascal. when a function is called it takes arguments
---

# The function Main 

The function main is special - because the program begins execution from main. Therefore every program must have a main function somewhere . Main usually calls other functions to help perform its job, some of the functions that main calls are written by the programmer, others are pre written  and they are called libraries 


## #include \<stdio.h>
This statement tells C to include the information required for standard input and output library

***when a function is called it takes arguments, however function main doesn't take in argument in languages like GOlang - we will find out shortly in C 

-----

* The statement of a function is enclosed in braces{} and in the "hello world" example, our function contains only one statement.

* Printf is a library function that prints output and for the sake of this example we will only be using it with strings 

*** string: A string otherwise called a string constant is a sequence of characters in double quotes 

### Escape sequences 
\\n - this encodes for a newline character, when printed it advances the output to the left margin on the next line 

- Printf never supplies a newline character automatically, escape sequences like \n provides a general and extensible mechanism for representing hard to type or invisible character - other examples are \t , \b, \", \\ etc


- ##comments : Anything in \/*\*/ and the compiler ignores it but comments are essential because they make code work better 

- in C all variables need to be declared before usage. Declaration is the initialization of a varaible. 
example int fahr ;
     int upper ; 
    int lower, step; 
