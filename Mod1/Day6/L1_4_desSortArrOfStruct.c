#include <stdio.h>

typedef struct {
    char name[50];
    int marks;
} Structure;

void descendingSort(Structure* structures, int size) {
    int i, j;
    Structure temp;

    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (structures[j].marks < structures[j + 1].marks) {
                temp = structures[j];
                structures[j] = structures[j + 1];
                structures[j + 1] = temp;
            }
        }
    }
}

int main() {
    Structure structures[] = {
        {"John", 85},
        {"Alice", 92},
        {"Bob", 78},
        {"Emily", 95}
    };

    int size = sizeof(structures) / sizeof(structures[0]);

    // Sort the structures by marks in descending order
    descendingSort(structures, size);

    // Print the sorted structures
    for (int i = 0; i < size; i++) {
        printf("Name: %s, Marks: %d\n", structures[i].name, structures[i].marks);
    }

    return 0;
}
