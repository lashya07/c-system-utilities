#include <stdio.h>
#include <stdlib.h>

#define BUFFER_SIZE 1024

int main(int argc, char *argv[]) {
    FILE *src, *dest;
    char buffer[BUFFER_SIZE];
    size_t bytes;

    if (argc != 3) {
        printf("Usage: %s <source> <destination>\n", argv[0]);
        return 1;
    }

    src = fopen(argv[1], "rb");
    if (!src) {
        printf("Error: Cannot open source file\n");
        return 1;
    }

    dest = fopen(argv[2], "wb");
    if (!dest) {
        fclose(src);
        printf("Error: Cannot open destination file\n");
        return 1;
    }

    while ((bytes = fread(buffer, 1, BUFFER_SIZE, src)) > 0) {
        fwrite(buffer, 1, bytes, dest);
    }

    fclose(src);
    fclose(dest);

    printf("File copied successfully.\n");
    return 0;
}
