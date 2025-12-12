_This project has been created as part of the 42 curriculum by loda-sil_

## Description
Push_swap is a sorting algorithm project that challenges you to sort a stack of integers using a limited set of operations; the goal is to have the minimum number of moves necessary to sort the stack.

The project consists of two stacks (A and B) and a set of operations:

**Swap operations**: `sa` `sb` `ss`

**Push operations**: `pa` `pb`

**Rotate operations**: `ra` `rb` `rr`

**Reverse rotate operations**: `rra` `rrb` `rrr`


**Implementation:**
- **Simple Sort**: For 2-5 elements, uses optimized manual algorithms
- **Radix Sort**: For 6+ elements, uses bit by bit sorting with normalization

## Instruction 

### Compilation
```bash
make && ./push_swap <numbers>
```
Example:
```bash
./push_swap 3 2 1 5 4

./push_swap "3 2 1 5 4" 
```
## Resources
- https://medium.com/nerd-for-tech/push-swap-tutorial-fa746e6aba1e
