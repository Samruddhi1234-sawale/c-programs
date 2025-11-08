#include <stdio.h>

int main() {
    int pcs, students;

    printf("Enter number of PCs in the lab: ");
    scanf("%d", &pcs);

    printf("Enter number of students: ");
    scanf("%d", &students);

    if (students <= pcs) {
        printf("All students can use a PC.\n");
    } else {
        printf("Not enough PCs. %d students will not get a PC.\n", students - pcs);
    }

    return 0;
}