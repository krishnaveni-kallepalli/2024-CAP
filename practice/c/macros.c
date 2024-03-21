#include <stdio.h>
#include <stdlib.h>

int main() {
    char *s;
    int n;

    printf("Enter size of char: ");
    scanf("%d", &n);

    s = (char *)malloc((n + 1) * sizeof(char)); // Allocate memory dynamically

    if (s == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter the string: ");
    scanf(" "); // Consume newline character left in the buffer
    fgets(s, n + 1, stdin); // Read string including spaces

    printf("String is: %s\n", s);

    // Free dynamically allocated memory
    free(s);

    return 0;
}

