/*
 * Finds the smallest and largest integer entered by the user.
 */

#include <stdio.h>
#include <stdlib.h>

int min(int argc, char *argv[])
{
    int min = atoi(argv[1]);

    for (int i = 2; i < argc; i++) {
        if (min > atoi(argv[i])) {
            min = atoi(argv[i]);
        }
    }

    return min;
}

int max(int argc, char *argv[])
{
    int max = atoi(argv[1]);

    for (int i = 2; i < argc; i++) {
        if (max < atoi(argv[i])) {
            max = atoi(argv[i]);
        }
    }

    return max;
}

int main(int argc, char *argv[])
{
    if (argc == 1) {
        return 1;
    } else {
        printf("Smallest: %d\n", min(argc, argv));
        printf("Largest: %d\n", max(argc, argv));
        return 0;
    }
}
