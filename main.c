#include <stdio.h>

#define ALEPH 26

int findmax(int freq[], int lim);

int main()
{
    int freq[ALEPH];
    int c;

    for (int i = 0; i < ALEPH; ++i) {
        freq[i] = 0;
    }

    while ((c = getchar()) != EOF) {
        if ('a' <= c && c <= 'z') {
            ++freq[c - 'a'];
        }
        if ('A' <= c && c <= 'Z') {
            ++freq[c - 'A'];
        }
    }
    // Debug 
    // for (int i = 0; i < ALEPH; ++i) {
    //     printf("%d\n", freq[i]);
    // }
    // printf("\n%d\n", findmax(freq, ALEPH));
    // End Debug
    for (int i = 0; i < ALEPH; ++i) {
        printf("%c  ", 'A' + i);
    }
    putchar('\n');

    int limiter, max;

    limiter = 1;
    max = findmax(freq, ALEPH);
    for (int i = 0; i < max; ++i) {
        for (int j = 0; j < ALEPH; ++j) {
            if (freq[j] >= limiter) {
            printf("#  ");
            }
            else {
                printf("   ");
            }
        }
        ++limiter;
        putchar('\n');
    }
}

int findmax(int freq[], int len)
{
    int max;

    max = 0;
    for (int i = 0; i< len; ++i) {
        if (freq[i] > max) {
            max = freq[i];
        }
    }
    return max;
}