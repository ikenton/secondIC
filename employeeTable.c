#include <string.h>
#include <stdlib.h>
#include "employee.h" //this is our struct that we just made.

Employee EmployeeTable[] =
{
    //5 employees in employee table.
    //wanna calculate how many employees we have cus ppl might be adding more in.
    {1001l, "Daphne Borromeo", "909-555-2134", 8.78},
    {1011l, "Tammy Franklin",  "213-555-1212", 4.50},
    {1140l, "Forris Perl",     "310-555-1215", 7.80},
    {4011l, "Tony Bobcat",     "909-555-1235", 6.34},
    {5045l, "Brian Height",    "714-555-2749", 8.32}

};

const int EmployeeTableEntrie = sizeof(EmployeeTable)/sizeof(EmployeeTable[0]);

void main(){
    printf("%ld\n",sizeof(EmployeeTable));
    printf("%ld\n",sizeof(EmployeeTable[0]));
    printf("%ld\n",sizeof(long));
    printf("%ld\n",sizeof(char*)); 
    printf("%ld\n",sizeof(char*));
    printf("%ld\n",sizeof(double));

}