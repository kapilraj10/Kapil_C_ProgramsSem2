#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int rollNumber;
    float marks;
};

int main() {
    struct Student *students;
    int n, i;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    students = (struct Student *)malloc(n * sizeof(struct Student));

    if (students == NULL) {
        printf("Memory allocation failed.\n");
        return 1; 
    }

    for (i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Name: ");
        getchar(); 
        fgets(students[i].name, sizeof(students[i].name), stdin);
        

        students[i].name[strcspn(students[i].name, "\n")] = 0;

        printf("Roll Number: ");
        scanf("%d", &students[i].rollNumber);

        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    
    printf("\nStudent Details:\n");
    for (i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll Number: %d\n", students[i].rollNumber);
        printf("Marks: %.2f\n", students[i].marks);
    }

    
    
    free(students);

    return 0;
}
