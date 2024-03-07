/* Q8. Write a program to read the name of a student (studentName), roll 
Number (rollNo) and marks (totalMarks) obtained. rollNo may be an 
alphanumeric string. Display the data as read. Hint: Create a Student 
structure and write appropriate functions.
*/

#include <stdio.h>

struct Student {
    char name[50];
    char rollNo[20];
    float totalMarks;
};


void read(struct Student *S1) {
    printf("Enter student name: ");
    scanf("%s", S1->name);

    printf("\nEnter roll number: ");
    scanf("%s", S1->rollNo);

    printf("\nEnter total marks obtained: ");
    scanf("%f",&S1->totalMarks);
}

void display(const struct Student *S1) {
    printf("\nStudent Name: %s\n", S1->name);
    printf("Roll Number: %s\n", S1->rollNo);
    printf("Total Marks Obtained: %.2f\n", S1->totalMarks);
}

int main() {
    struct Student S1;
    
    read(&S1);
    printf("\nEntered Student Data:\n");
    display(&S1);

    return 0;
}
