#include <stdio.h>
#include <stdlib.h>

/*
 * argc: The length of the argv array below
 * argv: Array of strings: argv[0] holds the program name as a string; the remaining indices hold the actual command-line arguments
 */
int main(int argc, char *argv[]) {
    if (argc < 3) {
        printf("Error: Please provide at least two numbers.\nUsage: %s <number 1> <number 2> ...\n", argv[0]);
        return 1;
    }

    float sum = 0;

    // Loop through each command-line argument to calculate the sum
    for (int i = 1; i < argc; i++) {
        sum += atoi(argv[i]);
    }

    // Calculate the average
    float average = sum / 10;

    printf("Average: %.2f\n", average);

    return 0;
}
