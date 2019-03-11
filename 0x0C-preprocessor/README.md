# 0x0C-preprocessor
this is the readme file for the preprocessor project at holberton

this project is intended to give us a solid understnading of how to
preprocessor handles all of the directives, macros and header guards prior
to compilation time.

## questions

###What are macros and how to use them

macros are basically substitutions made before the compilation process
they can be used to make code more readable or as a different way to evaluate
functions that is more error prone so less valuable.

###What are the most common predefined macros
__line__, __file__, and __date__ are some of the most common predefined macros

###How to include guard your header files
either by using #ifndef [ ]\#define[] or by using #pragma once
followed by a #endif at the end of the header file.