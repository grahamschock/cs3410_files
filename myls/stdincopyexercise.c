#include <stdio.h>
#include <unistd.h>

int
main(int argc, char **argv) {
    /* A program that loops forever reading a byte from stdin and printing it to stdout */

    char c; // A char is one byte wide

    while (read(STDIN_FILENO, &c, 1) != -1) {
        write(STDOUT_FILENO, &c, 1);
    }

    return 0;
}
