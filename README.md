# Cpp_Fast_IO
Cpp Fast IO Templates by drway.

The code is under MPL 2.0 Licence.

This Source Code Form is subject to the terms of the Mozilla Public
License, v. 2.0. If a copy of the MPL was not distributed with this
file, You can obtain one at https://mozilla.org/MPL/2.0/.

This template is used for competitive programming, for a faster read in and print out speed.

Need C++ 11 Support.

## Functions

* ```redi()``` is used to read in integers. You can use it like ```redi(a,b,c,...)``` . It uses variadic templates so your compiler must support C++ 11 or later version of C++.
* ```getchar()``` is a macro defined to get a character using the function ```fread()``` . (It is not the function defined in cstdio/stdio.h !)
* ```wrtn()``` is used to write an integer. You can use it like ```wrtn(a)``` .
* ```wrti()``` is used to write an integer and feed the line. You can use it like ```wrti(a)``` .

**ATTENTION: You MUST use ```flush()``` after output!**

## Differences between the lazy version and the full version

The full version includes the comments that explains the code, the lazy version removed most of them.  It is better to use in contests.

## Functions need to be added

* read in a string
* print a string
