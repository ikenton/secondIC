#include <string.h>
#include <stdlib.h>
#include "employee.h"
//#include <stdio.h>
int main(void){

    PtrToEmployee searchEmployeeByNumber(const Employee table[], int sizeTable, long numberToFind);
    PtrToEmployee searchEmployeeByName(const Employee table[], int sizeTable, char* nameToFind);
    PtrToEmployee searchEmployeeByPhone(const Employee table[], int sizeTable, char* numberToFind);
    PtrToEmployee searchEmployeeBySalary(const Employee table[], int sizeTable, double numberToFind);

    extern Employee EmployeeTable[];
    extern const int EmployeeTableEntries;

    PtrToEmployee matchPtr;
    matchPtr = searchEmployeeByNumber(EmployeeTable, EmployeeTableEntries, 1001l);

    if(matchPtr != NULL){
        printf("Employee ID 1001 is in record %ld\n", matchPtr - EmployeeTable);
    }
    else{
        printf("Employee ID is NOT found in the record\n");
    }

    matchPtr = searchEmployeeByName(EmployeeTable, EmployeeTableEntries, "Tony Bobcat");
    if(matchPtr != NULL){
        printf("Employee Tony Bobcat is in record %ld\n", matchPtr - EmployeeTable);
    }
    else{
        printf("Employee Tony Bobcat is NOT found in the record\n");
    }

    matchPtr = searchEmployeeByPhone(EmployeeTable, EmployeeTableEntries, "909-555-1235");
    if(matchPtr != NULL){
        printf("Employee Phone Number is in record %ld\n", matchPtr - EmployeeTable);
    }else{
        printf("Employee Phone Number is NOT found in the record\n");
    }

    matchPtr = searchEmployeeBySalary(EmployeeTable, EmployeeTableEntries, 6.34);
    if(matchPtr != NULL){
        printf("Employee Salary is in record %ld\n", matchPtr - EmployeeTable);
    }else
        printf("Employe Salary is NOT found in the record\n");
    
    EXIT_SUCCESS;


}

