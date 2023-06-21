#include <stdio.h>
#include <string.h>

struct student {
  char name[20];
  int roll_no;
};

int search_student(struct student *arr, int size, char *name) {
  int i;
  for (i = 0; i < size; i++) {
    if (strcmp(arr[i].name, name) == 0) {
      return i;
    }
  }
  return -1;
}

int main() {
  struct student arr[] = {
    {"John Doe", 123},
    {"Jane Doe", 456},
    {"Mary Smith", 789},
  };
  int size = sizeof(arr) / sizeof(arr[0]);
  char name[20];
  printf("Enter the name of the student you want to search: ");
  scanf("%s", name);
  int index = search_student(arr, size, name);
  if (index != -1) {
    printf("Student found at index %d.\n", index);
  } else {
    printf("Student not found.\n");
  }
  return 0;
}