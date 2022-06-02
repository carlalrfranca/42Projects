![(https://github.com/42Paris/minilibx-linux/actions/workflows/ci.yml/badge.svg)](https://img.shields.io/badge/norminette-100%25-green)

# Get next line
Function that reads a file and prints one line at a time. 

### Functions
[`read`](https://man7.org/linux/man-pages/man2/read.2.html) <br>
[`malloc`](https://man7.org/linux/man-pages/man3/free.3.html) <br>
[`free`](https://man7.org/linux/man-pages/man1/free.1.html) <br>

### General Info
[`File Descriptor`](https://www.computerhope.com/jargon/f/file-descriptor.htm)<br>
[`Static Variables`](https://www.geeksforgeeks.org/static-variables-in-c/)<br>
[`O_RDONLY`](https://pubs.opengroup.org/onlinepubs/7908799/xsh/open.html)<br>

### Compilation
`make` to compile <br>
`make clean` to remove objects <br>
`make fclean` to remove objects and binary files <br>

### Implementation
`gcc main.c src/get_next_line.c` <br>
`./a.out test/text.txt` <br>
