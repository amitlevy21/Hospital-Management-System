//
//  department.h
//  Hospital_project
//
//  Created by Moshe Sheena on 15/08/2017.
//  Copyright © 2017 Moshe Sheena. All rights reserved.
//

#ifndef _DEPARTMENT_H
#define _DEPARTMENT_H

#include "visit.h"

class Patient;
class Employee;
class Visit;
class Department
{
private:
    char* name;
    int maxNumOfPatients;
    int currentNumOfPatients = 0;
    int maxNumOfEmployees;
    int currentNumOfEmployees = 0;
    Patient** allPatients;
    Employee** allEmployees;
    Visit** allVisits;
public:
    Department(const char* name, int maxNumOfPatients,
               int maxNumOfEmployess );

    ~Department();

    Department operator=(const Department& other);

    //getters
    const char* getName()                       const;
    int getMaxNumOfPatients()                   const;
    int getMaxNumOfEmployees()                  const;
    int getCurrentNumOfPatients()               const;
    int getCurrentNumOfEmployees()              const;
    const Patient& getPatient(int ID)           const;
    const Employee& getEmployee(int employeeID) const;
    
    //setters
    void setName(const char* name);
    bool setMaxNumOfPatients(int num);
    bool setMaxNumOfEmployees(int num);
    
    //methods
    bool addPatient(const Patient& newPatient);
    bool removePatient(int ID);
    bool addEmployee(const Employee& newEmployee);
    bool removeEmployee(int employeeID);
};

#endif /* _DEPARTMENT_H */
