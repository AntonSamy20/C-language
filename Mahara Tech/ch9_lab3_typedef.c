#include <stdio.h>
#include <stdbool.h>

typedef struct {
    float salary;
    float bonus;
    float deduction;
}Employee;

int main() {
    Employee e[3];
    float netSalary=0;
    for (int i = 0; i < 3; i++) {
        printf("Enter salary, bonus, deduction for employee %d: ", i + 1);
        scanf("%f", &e[i].salary);
        scanf("%f", &e[i].bonus);
        scanf("%f", &e[i].deduction);
        netSalary +=(e[i].salary+e[i].bonus-e[i].deduction);
    }

    printf("Net Salary: %.2f\n", netSalary);

    return 0;
}
