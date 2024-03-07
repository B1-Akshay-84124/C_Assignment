#include <stdio.h>

struct Employee {
    char firstName[50];
    char lastName[50];
    double monthlySalary;
};

void emp_init(struct Employee* e, const char* firstName, const char* lastName, double monthlySalary) {
    strcpy(e->firstName, firstName);
    strcpy(e->lastName, lastName);
    e->monthlySalary = monthlySalary;
}

void set_salary(struct Employee* e, double salary) {
    e->monthlySalary = salary;
}

void emp_display(struct Employee* e) {
    printf("Employee Name: %s %s\n", e->firstName, e->lastName);
    printf("Monthly Salary: %.2f\n", e->monthlySalary);
}

int main() {
    struct Employee emp1, emp2;

    emp_init(&emp1, "John", "Doe", 5000.0);
    emp_init(&emp2, "Jane", "Smith", 6000.0);

    
    printf("Yearly Salary for Employee 1: %.2f\n", emp1.monthlySalary * 12);
    printf("Yearly Salary for Employee 2: %.2f\n", emp2.monthlySalary * 12);

   
    set_salary(&emp1, emp1.monthlySalary * 1.10);
    set_salary(&emp2, emp2.monthlySalary * 1.10);

    
    printf("\nAfter 10%% raise:\n");
    printf("Yearly Salary for Employee 1: %.2f\n", emp1.monthlySalary * 12);
    printf("Yearly Salary for Employee 2: %.2f\n", emp2.monthlySalary * 12);

    return 0;
}