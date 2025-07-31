#include <stdio.h>

struct Student {
    char name[50];
    float marks;
};

int main() {
    struct Student students[100];
    int n;
    float sum = 0.0, avg;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Enter name and marks of student %d:\n", i + 1);
        scanf("%s %f", students[i].name, &students[i].marks);
        sum += students[i].marks;
    }

    avg = sum / n;
    printf("\nAverage marks: %.2f\n", avg);

    printf("\nStudents scoring **above** average:\n");
    for (int i = 0; i < n; i++) {
        if (students[i].marks > avg)
            printf("Name: %s, Marks: %.2f\n", students[i].name, students[i].marks);
    }

    printf("\nStudents scoring **below** average:\n");
    for (int i = 0; i < n; i++) {
        if (students[i].marks < avg)
            printf("Name: %s, Marks: %.2f\n", students[i].name, students[i].marks);
    }

    return 0;
}
