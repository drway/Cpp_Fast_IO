# Cpp_Fast_IO
Cpp Fast IO Templates by drway.

The code is under MPL 2.0 Licence.

This Source Code Form is subject to the terms of the Mozilla Public
License, v. 2.0. If a copy of the MPL was not distributed with this
file, You can obtain one at https://mozilla.org/MPL/2.0/.

This template is used for competitive programming, for a faster read in and print out speed.

Need C++ 11 Support.

## Functions

* ```redi()``` is used to read in integers or strings. You can use it like ```redi(a,b,c,...)``` . It uses variadic templates so your compiler must support C++ 11 or later version of C++. **It only supports reading in ```std::string``` type of string.**
* ```getchar()``` is a macro defined to get a character using the function ```fread()``` . (It is not the function defined in cstdio/stdio.h)
* ```wrtn()``` is used to write an integer or a string. You can use it like ```wrtn(a)``` . It supports both ```std::string``` and C-Style String. **ATTENTION: Printing out a C-style String not terminated with a null char is an undefined behavior!**
* ```wrti()``` is used to write an integer or a string and feed the line. You can use it like ```wrti(a)``` . It supports both ```std::string``` and C-Style String. **ATTENTION: Printing out a C-style String not terminated with a null char is an undefined behavior!**

**ATTENTION: You MUST use ```flush()``` after output!**

## Differences between the lazy version and the full version

The full version includes the comments that explains the code, the lazy version removed most of them.  It is better to use in contests.
