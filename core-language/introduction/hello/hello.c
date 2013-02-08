/*
 * This is a very simple C program.
 * Compile first, then run.
 *
 * To compile:
 *     gcc hello.c
 *
 * This produces a file named "a.out".
 * To run:
 *     ./a.out
 *
 * Alternatively, use the Makefile:
 *     make
 *
 * The Makefile can also clean up the build products:
 *     make clean
 */

#include <stdio.h>

int
main (int argc, char **argv)
{
    printf ("Hello, world\n");
    return 0;
}
