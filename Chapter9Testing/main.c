#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char c;
    char *sentence;
    file = fopen("text.txt", "r");
    if(file == NULL) {
        printf("Error");
        exit(1);
    }

    while(c != EOF) {
        c = fgetc(file);
        printf("%c", c);
    }

    printf("Enter a sentence: ");
    gets(sentence);
    fputs(sentence, file);
    fputs("\n", file);
    rewind(file);
    printf("File contents:\n");
    while(!feof(file)) {
        printf("%s", fgets(sentence, 10, file));
    }

    // fflush(stdin);
    // fscanf(file, "%d", &num);
    // printf("Value of n = %d", num);

    // printf("Enter num: ");
    // scanf("%d", &num);
    // fprintf(file, "%d", num);
    fclose(file);
    return 0;
}
