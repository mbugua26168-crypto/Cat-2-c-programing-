/*
Name: Mbugua Anka 
Reg.no:CT100/G/26168*25
Desciption: c program for cfile
*/
#include <stdio.h>

void writeInput() {
    FILE *f;
    int num, i;

    f = fopen("input.txt", "w");
    if (f == NULL) {
        printf("Error opening input file!\n");
        return;
    }

    printf("Enter 10 integers:\n");
    for (i = 0; i < 10; i++) {
        scanf("%d", &num);
        fprintf(f, "%d\n", num);
    }

    fclose(f);
}

void processNumbers() {
    FILE *fin, *fout;
    int num, sum = 0, count = 0;
    float avg;

    fin = fopen("input.txt", "r");
    if (fin == NULL) {
        printf("Error reading input.txt!\n");
        return;
    }

    fout = fopen("output.txt", "w");
    if (fout == NULL) {
        printf("Error opening output.txt!\n");
        fclose(fin);
        return;
    }

    while (fscanf(fin, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    avg = (float)sum / count;

    fprintf(fout, "Sum = %d\n", sum);
    fprintf(fout, "Average = %.2f\n", avg);

    fclose(fin);
    fclose(fout);
}

void displayFiles() {
    FILE *f;
    char ch;

    printf("\nContents of input.txt:\n");
    f = fopen("input.txt", "r");
    if (f != NULL) {
        while ((ch = fgetc(f)) != EOF)
            putchar(ch);
        fclose(f);
    } else {
        printf("Error reading input.txt\n");
    }

    printf("\nContents of output.txt:\n");
    f = fopen("output.txt", "r");
    if (f != NULL) {
        while ((ch = fgetc(f)) != EOF)
            putchar(ch);
        fclose(f);
    } else {
        printf("Error reading output.txt\n");
    }
}

int main() {
    writeInput();
    processNumbers();
    displayFiles();
    return 0;
}