#include <stdio.h>
#include <string.h>
struct Employee {
    char name[50];
    char designation[50];
    char gender; // 'M' or 'F'
    char doj[15]; 
    float salary;
};

void analyzeEmployees(struct Employee emp[], int n) {
    int maleCount = 0, femaleCount = 0;
    int highSalaryCount = 0;
    int asstManagerCount = 0;

    
    printf("Total Employees: %d\n", n);
int i;
    for( i = 0; i < n; i++) {
       
        if (emp[i].gender == 'M') 
        maleCount++;
        else if (emp[i].gender == 'F') 
        femaleCount++;

        
        if (emp[i].salary > 10000) 
        highSalaryCount++;

        
        if (strcmp(emp[i].designation, "Asst Manager") == 0) 
  
        asstManagerCount++;
    }

    printf("Male Employees: %d\n", maleCount);
    printf("Female Employees: %d\n", femaleCount);
    printf("Employees with Salary > 10000: %d\n", highSalaryCount);
    printf("Total Assistant Managers: %d\n", asstManagerCount);
}

int main() {
    int n;
    printf("Enter number of employees: ");
    scanf("%d", &n);

    struct Employee emp[n];
int i;
    for ( i = 0; i < n; i++) {
        printf("\nDetails for Employee %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]s", emp[i].name); // Reads string with spaces
        printf("Designation(Manager/Asst Manager/CEO): ");
        scanf(" %[^\n]s", emp[i].designation);
        printf("Gender (M/F): ");
        scanf(" %c", &emp[i].gender);
        printf("Date of Joining: ");
        scanf("%s", emp[i].doj);
        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    }

    analyzeEmployees(emp, n);

    return 0;
}









































































