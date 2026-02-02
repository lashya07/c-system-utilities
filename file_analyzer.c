#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[]) {
    FILE *fp;
    char ch;
    long characters = 0, words = 0, lines = 0;
    int in_word = 0;

    if (argc != 2) {
        printf("Usage: %s <filename>\n", argv[0]);
        return 1;
    }

    fp = fopen(argv[1], "r");
    if (fp == NULL) {
        printf("Error: Cannot open file.\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        characters++;

        if (ch == '\n')
            lines++;

        if (isspace(ch))
            in_word = 0;
        else if (!in_word) {
            in_word = 1;
            words++;
        }
    }

    fclose(fp);

    printf("Characters: %ld\n", characters);
    printf("Words: %ld\n", words);
    printf("Lines: %ld\n", lines);

    return 0;
}
