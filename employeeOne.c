#include <string.h>
#include "employee.h"

PtrToConstEmployee searchEmployeeByNumber(PtrToConstEmployee ptr, int tableSize, long targetNumber){
    const PtrToConstEmployee endPtr = ptr + tableSize;

    for(; ptr < endPtr; ptr++){  //search until end of table
        if(ptr->number == targetNumber)  //check if it equals the employee number
            return(PtrToConstEmployee) ptr;  //return location of the number to callee
    }
    return NULL;    //this will only happen if no employee number matches in loop above
}

//essentially same funtionality as above but comparing strings to check if ==
PtrToConstEmployee searchEmployeeByName(PtrToConstEmployee ptr, int tableSize, char* targetName){
    const PtrToConstEmployee endPtr = ptr + tableSize;

    for(; ptr < endPtr; ptr++){
        if(strcmp(ptr->name,targetName)==0)
            return(PtrToEmployee) ptr;
    }
    return NULL;
}


//new conditions
PtrToEmployee searchEmployeeByPhone(PtrToEmployee ptr, int tableSize, char* targetName){
    const PtrToEmployee endPtr = ptr + tableSize;

    for(; ptr < endPtr; ptr++){
        if(strcmp(ptr->phone,targetName)==0){
            return(PtrToEmployee)ptr;
        }
    }

}

PtrToEmployee searchEmployeeBySalary(PtrToEmployee ptr, int tableSize, double targetNumber){
    const PtrToEmployee endPtr = ptr + tableSize;

    for(; ptr < endPtr; ptr++){
        if(ptr->salary == targetNumber){
            return(PtrToEmployee)ptr;
        }
    }

}