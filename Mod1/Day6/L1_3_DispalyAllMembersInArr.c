#include <stdio.h>

struct student {
  char name[20];
  int id;
  float marks;
};

void display_students(struct student *students, int n) {
  int i;
  for (i = 0; i < n; i++) {
    printf("Student %d:\n", i + 1);
    printf("Name: %s\n", students[i].name);
    printf("ID: %d\n", students[i].id);
    printf("Marks: %.2f\n", students[i].marks);
  }
}

int main() {
  struct student students[3];
  strcpy(students[0].name, "Andrew Flintoff");
  students[0].id = 12345;
  students[0].marks = 98.5;
  strcpy(students[1].name, "Alastair Cook");
  students[1].id = 67890;
  students[1].marks = 89.2;
  strcpy(students[2].name, "Steve Smith");
  students[2].id = 34567;
  students[2].marks = 78.1;

  display_students(students, 3);

  return 0;
}