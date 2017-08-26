//
//  department.h
//  Hospital_project
//
//  Created by Moshe Sheena on 15/08/2017.
//  Copyright © 2017 Moshe Sheena. All rights reserved.
//

#ifndef department_h
#define department_h

class Patient;
class Employee;

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
public:
    Department(const char* name, int maxNumOfPatients,
               int maxNumOfEmployess );
    //getters
    const char* getName()                  const;
    int getMaxNumOfPatients()              const;
    int getMaxNumOfEmployees()             const;
    int getCurrentNumOfPatients()          const;
    int getCurrentNumOfEmployees()         const;
    const Patient& getPatient(int index)   const;
    const Employee& getEmployee(int index) const;
    
    //setters
    void setName(const char* name);
    bool setMaxNumOfPatients(int num);
    bool setMaxNumOfEmployees(int num);
    
    //methods
    bool addPatient(const Patient& newPatient);
    bool removePatient(int ID);
    bool removePatient(const char* name); //?
    bool addEmployee(const Employee& newEmployee);
    bool removeEmployee(int employeeID);
};

#endif /* department_h */
