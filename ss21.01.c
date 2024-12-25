
#include <stdio.h>

int main() {
    char inputString[256];
    FILE *file;

    file = fopen("bt01.txt", "w");
    if (file == NULL) {
        printf("Khong the mo file bt01.txt.\n");
        return 1;
    }
    printf("Nhap mot chuoi bat ky: ");
    fgets(inputString, sizeof(inputString), stdin);
    fprintf(file, "%s", inputString);

    fclose(file);
    printf("Da ghi chuoi vao file bt01.txt thanh cong.\n");

    return 0;
}
