#include <stdio.h>

int main() {
    FILE *fp;
    char filename[] = "numbers.txt";
    int num, count = 0;
    long sum = 0;
    double average;
    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error: Cannot open file %s\n", filename);
        return 1;
    }
    while (fscanf(fp, "%d", &num) == 1) {
        sum += num;
        count++;
    }
    fclose(fp);

    if (count == 0) {
        printf("No integers found in the file.\n");
        return 0;
    }
    average = (double)sum / count;
    printf("Sum: %ld\n", sum);
    printf("Average: %.2lf\n", average);

    return 0;
}
