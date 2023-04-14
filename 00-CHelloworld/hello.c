#include <stdio.h>

int main() {
    FILE *fp;
    fp = fopen("output.txt", "w");
    fprintf(fp, "Hello, World!");
    fclose(fp);
    return 0;
}