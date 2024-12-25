#include <stdio.h>

int main() {
    char appendString[256];
    FILE *file;
    file = fopen("bt01.txt", "a");
    if (file == NULL) {
        printf("Khong the mo file bt01.txt.\n");
        return 1;
    }

    printf("Nhap mot chuoi bat ky de ghi them vao file: ");
    fgets(appendString, sizeof(appendString), stdin);

    fprintf(file, "%s", appendString);

    fclose(file);
    printf("Da ghi them chuoi vao file bt01.txt thanh cong.\n");

    return 0;
}
