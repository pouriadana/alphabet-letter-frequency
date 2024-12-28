#include <stdio.h>

#define ALEPH 26

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
    for (int i = 0; i < ALEPH; ++i) {
        printf("%d\n", freq[i]);
    }
}