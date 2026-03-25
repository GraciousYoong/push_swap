!!! numeric parameter + greater than maxint	>>> print Error\n
!!! cannot handle negative value
!!! 100 random value -> 817-1221, sometime time out
!!! 500 random value -> 8043-9222, sometime time out

//Error
non numeric parameter >>> print Error\n
duplicate numeric parameter >>> print Error\n
!!! numeric parameter + greater than maxint	>>> print Error\n
without parameter >>> display nothing

//Sorted list
push_swap 42 >>> display nothing
push_swap 2 3 >>> display nothing
push_swap 0 1 2 3 >>> display nothing
push_swap 0 1 2 3 4 5 6 7 8 9 >>> display nothing
push_swap <any sorted values> >>> display nothing

//Simple version
push_swap 2 1 0 >>> display 2 or 3 instructions
push_swap <any 3 random values> >>> display 0 - 3 instructions
push_swap 1 5 2 4 3 >>> display <12 instructions, even better is <8 instructions
push_swap <any 5 random values>  >>> display <12 instructions

//Middle version
push_swap <any 100 random values>  >>> display <700 instructions

//Advance version
push_swap <any 500 random values>  >>> display <5500 instructions