#include <stdio.h>

int main() {
    FILE* file = fopen("example.txt", "w");

    if (file != NULL) {
        fprintf(file, "Hello, File I/O!\n");
        fclose(file);
        printf("Data written to file successfully.\n");
    } else {
        printf("Error opening file!\n");
    }

    return 0;
}
