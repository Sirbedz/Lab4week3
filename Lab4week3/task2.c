#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *string;
    char *string2;
    int length, i;

    string = (char *)malloc(100 * sizeof(char));
    if (string == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter a string: ");
    fgets(string, 100, stdin);
    length = strlen(string);
    if (string[length - 1] == '\n') {
        string[length - 1] = '\0';
        length--;
    }

    string2 = (char *)malloc((length + 1) * sizeof(char));
    if (string2 == NULL) {
        printf("Memory allocation failed.\n");
        free(string);
        return 1;
    }

    for (i = 0; i < length; i++) {
        string2[i] = string[length - 1 - i];
    }
    string2[length] = '\0';

    printf("Reversed string: %s\n", string2);

    free(string);
    free(string2);

    return 0;
}
