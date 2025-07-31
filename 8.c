#include <stdio.h>

int stringLength(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

void stringConcat(char str1[], char str2[]) {
    int i = 0, j = 0;
    while (str1[i] != '\0') {
        i++;
    }
    while (str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }
    str1[i] = '\0';
}

int stringCompare(char str1[], char str2[]) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return str1[i] - str2[i];
        }
        i++;
    }
    return str1[i] - str2[i];
}

int main() {
    char str1[100], str2[100];

    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);

    printf("Length of first string: %d\n", stringLength(str1));
    printf("Length of second string: %d\n", stringLength(str2));

    int cmp = stringCompare(str1, str2);
    if (cmp == 0)
        printf("Strings are equal.\n");
    else if (cmp < 0)
        printf("First string is smaller.\n");
    else
        printf("First string is greater.\n");

    stringConcat(str1, str2);
    printf("After concatenation: %s\n", str1);

    return 0;
}
