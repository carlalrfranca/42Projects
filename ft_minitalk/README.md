![(https://github.com/42Paris/minilibx-linux/actions/workflows/ci.yml/badge.svg)](https://img.shields.io/badge/norminette-100%25-green)

# Minitalk 

The purpose of this project is to code a small data exchange program using UNIX signals. <br>
It is an introductory project for the bigger UNIX projects that will appear later on in the cursus. 

### General Info

[`bitwise`](https://www.cprogramming.com/tutorial/bitwise_operators.html) <br>
[`getpid`](https://man7.org/linux/man-pages/man2/getpid.2.html) <br>
[`pause`](https://man7.org/linux/man-pages/man2/pause.2.html) <br>
[`sigaction`](https://man7.org/linux/man-pages/man2/sigaction.2.html) <br>
[`signal`](https://man7.org/linux/man-pages/man2/signal.2.html) <br>
[`sigemptyset & sigaddset`](https://man7.org/linux/man-pages/man3/sigsetops.3.html) <br>
[`SIGUSR1 & SIGUSR2`](https://www.gnu.org/software/libc/manual/html_node/Miscellaneous-Signals.html)<br>

### Compilation

Clone [`Libft`](https://github.com/carlarfranca/42Projects/tree/main/ft_libft/Libft_Commented) repo  in the `src` folder <br>
`make` to compile files <br>
`make clean` to remove objects <br>
`make fclean` to remove objects and binary files <br>

### Implementation 

`./server` and `./client [pid number] "string"` on simultaneous terminals to start program. <br>
