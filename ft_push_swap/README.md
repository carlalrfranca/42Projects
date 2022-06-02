![(https://github.com/42Paris/minilibx-linux/actions/workflows/ci.yml/badge.svg)](https://img.shields.io/badge/norminette-100%25-green)

# Push_Swap
A program that sorts input numbers using a data structure consisting of two A and B stacks and provided instructions. <br>
The numbers are inserted in stack A and, after sorting using stack B as auxiliary, they must be stored in A. 

### Functions
[`read`](https://man7.org/linux/man-pages/man2/read.2.html) <br>
[`malloc`](https://man7.org/linux/man-pages/man3/free.3.html) <br>
[`free`](https://man7.org/linux/man-pages/man1/free.1.html) <br>

### General Info
[`Linked List`](https://www.programiz.com/dsa/linked-list) <br>
[`Radix Sort`](https://www.programiz.com/dsa/radix-sort) <br>
[`int max & int min`](https://www.journaldev.com/41151/int-max-min-c-plus-plus) <br>

### Compilation
`make` to compile <br>
`make clean` to remove objects <br>
`make fclean` to remove objects and binary files <br>

### Implemetation
> to change the number of inputs just replace 100 with another value <br>

`MYVAR=$(seq 100 | shuf)`  <br>
`./push_swap $MYVAR`  <br>
`echo $MYVAR`  <br>
