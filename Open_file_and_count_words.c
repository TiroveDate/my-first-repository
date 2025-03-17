#include <stdio.h>

int main() {
    FILE *file;
    char filename[] = "example.txt";    // enter path to file
    char line[256];

    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error: The file could not open.");
        return 1;
    }

    printf("File contents.\n");

    while (fgets(line, sizeof(line), file)) {
        printf("%s", line);
    }

    fclose(file);

    return 0;
}