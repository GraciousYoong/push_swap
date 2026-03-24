*This project has been created as part of the 42 curriculum by gyoong.*

# Push_swap

## Description

`Push_swap` is a sorting algorithm project that focuses on sorting a stack of integers using a limited set of operations.

The goal of this project is to understand algorithmic efficiency and optimize the number of operations required to sort data.

This project introduces concepts such as stack manipulation, algorithm design, and complexity optimization under constraints.

By completing this project, students strengthen their knowledge of:
- data structures (stacks)
- sorting algorithms
- algorithm optimization and complexity
- problem-solving under constraints

---

## Features

Supports sorting a list of integers using two stacks (a and b) and a predefined set of operations, aiming to produce the shortest possible sequence of instructions.

### Available Operations:

sa (swap a): Swap the first 2 elements at the top of stack a. Do nothing if there is only one element or none.

sb (swap b): Swap the first 2 elements at the top of stack b. Do nothing if there is only one element or none.

ss: Perform sa and sb at the same time.

pa (push a): Take the first element at the top of b and put it at the top of a. Do nothing if b is empty.

pb (push b): Take the first element at the top of a and put it at the top of b. Do nothing if a is empty.

ra (rotate a): Shift up all elements of stack a by 1. The first element becomes the last one.

rb (rotate b): Shift up all elements of stack b by 1. The first element becomes the last one.

rr: Perform ra and rb at the same time.

rra (reverse rotate a): Shift down all elements of stack a by 1. The last element becomes the first one.

rrb (reverse rotate b): Shift down all elements of stack b by 1. The last element becomes the first one.

rrr: Perform rra and rrb at the same time.

### The function returns:
- a sequence of operations that sorts the input
- the shortest (or near-optimal) set of instructions
- instructions separated strictly by newline (\n)

### Error Handling:
- If no arguments are provided, the program outputs nothing
- In case of error, the program outputs:
```bash
Error
```
to the standard error

Errors include:
- non-integer inputs
- integer overflow or underflow
- duplicate values
- invalid input format

### Bonus Features

The bonus implementation extends the mandatory part by:
- adding a checker program to validate the correctness of the sorting operations
- reading instructions from standard input and executing them sequentially
- verifying whether stack a is sorted and stack b is empty after execution
- outputting:
	- OK if the result is correct
	- KO if the result is incorrect
	- Error in case of invalid input or instructions

---

## Instructions

### Compilation

#### Mandatory Part

Compile the mandatory version as follows:

```bash
make
```
#### Bonus Part
Compile the bonus version as follows:

```bash
make bonus
```

### Usage

#### Mandatory Part
Run with manually provided integers:
```bash
./push_swap -2 3 134 +78 0
```
Run with a randomly generated list of integers:
```bash
ARG=$(seq -99 99 | shuf | tr '\n' ' '); ./push_swap $ARG
```
Run with a random list and count the number of operations:
```bash
ARG=$(seq -99 99 | shuf | tr '\n' ' '); ./push_swap $ARG | wc -l
```
Run with random values and check using the official checker:
```bash
ARG=$(seq -99 99 | shuf | tr '\n' ' '); ./push_swap $ARG | ./checker_linux $ARG
```

#### Bonus Part
Run with random values and check using checker for bonus part:
```c
ARG=$(seq -99 99 | shuf | tr '\n' ' '); ./push_swap $ARG | ./checker $ARG
```
---

## Algorithm and Data Structure Explanation

### Overall Algorithm

The core algorithm follows the strategy below:
* Push elements from *stack a* to *stack b*, keeping only a 3 elements in *stack a*
* Sort the remaining elements in *stack a*
* For each element in *stack b*, determine its target position in *stack a*
* Calculate the cost of moving each element based on the required rotations
* Select the cheapest element and move it using the most efficient combination of operations (rr, rrr, etc.)
* Repeat until all elements are pushed back to stack a in sorted order
* Perform a final rotation to align the smallest element at the top

---

### Data Structures Used

* `Doubly linked list` used to implement stacks, enabling efficient rotations and bidirectional traversal
* `t_node` used to represent each element, storing data such as number, current_position, target node and cost
* `t_stack` used to stored head, tail and size of the stack

---

## Resources

### Technical References

* *Push swap visualizer*
	* https://push-swap42-visualizer.vercel.app/
* Oceano — *push_swap : a performant sorting algorithm using 2 stacks (100-630 moves | 500-5470 moves)*
	* https://www.youtube.com/watch?v=OaG81sDEpVk
* Thuggonaut — *push_swap TUTORIAL!* 
	* https://www.youtube.com/watch?v=wRvipSG4Mmk&t=2689s

* Jamie Dawson — *Push_Swap: The least amount of moves with two stacks*
	* https://medium.com/@jamierobertdawson/push-swap-the-least-amount-of-moves-with-two-stacks-d1e76a71789a


### AI Usage Disclosure

AI tools were used **as a learning aid**, not as a code generator. Specifically:

* to clarify concepts related to algorithms and data structures
* to improve understanding of problem-solving approaches
* to refine documentation and explanations

All code was written, tested, and debugged manually by the author.

---

## Notes

This implementation fully complies with the 42 `Push_swap` subject requirements, including the bonus part.
