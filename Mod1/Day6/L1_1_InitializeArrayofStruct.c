#include <stdio.h>
#include<string.h>

#define MAX_STUDENTS 100

// Structure representing a student
struct Student {
    int id;
    char name[50];
    int age;
};


void display(struct Student s[], int numStudents)
{
    printf("\nStudent Information:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("\nStudent %d:\n", i + 1);
        
        printf("ID: %d\n", s[i].id);
        printf("Name: %s\n", s[i].name);
        printf("Age: %d\n", s[i].age);
    }

}

int main() {
    // Declare an array of structures
    struct Student students[MAX_STUDENTS];

    int numStudents;

    printf("Enter the number of students: ");
    scanf("%d", &numStudents);

    // Read information for each student
    for (int i = 0; i < numStudents; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        
        printf("ID: ");
        scanf("%d", &students[i].id);
        
        printf("Name: ");
        scanf("%[^\n]s", students[i].name);
        
        printf("Age: ");
        scanf("%d", &students[i].age);
    }

    // call the display function
    display(students,numStudents);

    return 0;
}
