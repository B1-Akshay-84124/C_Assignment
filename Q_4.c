/*    Q4. Write a program to calculate the grade of a student. There are five 
subjects. Marks in each subject are entered from keyboard. Assign grade 
based on the following rule:

Total Marks >= 90 Grade: Ex
90 > Total Marks >= 80 Grade: A
80 > Total Marks >= 70 Grade: B
70 > Total Marks >= 60 Grade: C
60 > Total Marks Grade: F

*/
#include<stdio.h>

int main() {
    int marks[5];
    int totalMarks = 0;

    for (int i = 0; i < 5; ++i) {
        printf("Enter marks for subject %d: ", i + 1);
        scanf("%d", &marks[i]);
        totalMarks += marks[i];
    }
    totalMarks=totalMarks/5;
    if (totalMarks >= 90){
        printf("Total Marks: %d\n", totalMarks);
        printf("Grade: Ex\n");
    }
    else if (totalMarks >= 80){
        printf("Total Marks: %d\n", totalMarks);
        printf("Grade: A\n");
    }
    else if (totalMarks >= 70){
        printf("Total Marks: %d\n", totalMarks);
        printf("Grade: B\n");
    }
    else if (totalMarks >= 60){
        printf("Total Marks: %d\n", totalMarks);
        printf("Grade: C\n");
    }
    else{
        printf("Total Marks: %d\n", totalMarks);
        printf("Grade: F\n");
    }
        
}