#include <stdio.h>

int main() {
    char firstLine[256];
    FILE *file;

    file = fopen("bt01.txt", "r");
    if (file == NULL) {
        printf("Khong the mo file bt01.txt.\n");
        return 1;
    }

    if (fgets(firstLine, sizeof(firstLine), file) != NULL) {
        printf("Dong dau tien trong file: %s\n", firstLine);
    } else {
        printf("File bt01.txt rong hoac khong co noi dung.\n");
    }

    fclose(file);

    return 0;
}

