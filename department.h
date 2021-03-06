//
//  department.h
//  Hospital_project
//
//  Created by Moshe Sheena on 15/08/2017.
//  Copyright © 2017 Moshe Sheena. All rights reserved.
//

#ifndef _DEPARTMENT_H
#define _DEPARTMENT_H

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
               int maxNumOfEmployess) throw(const char*);

    ~Department();

    Department& operator=(const Department& other) = delete;

    Department& operator+=(const Employee& newEmployee)     throw();
    Department& operator+=(const Patient& newPatient)       throw();
    Department& operator-=(const Employee& existingEmployee)throw();
    Department& operator-=(const Patient& existingPatient)  throw();


    const char* getName()                       const;
    int getMaxNumOfPatients()                   const;
    int getMaxNumOfEmployees()                  const;
    int getCurrentNumOfPatients()               const;
    int getCurrentNumOfEmployees()              const;
    const Employee** getAllEmployees()          const;
    const Patient& getPatient(int ID)           const;
    const Employee& getEmployee(int employeeID) const;




    void setName(const char* name)          throw(const char*);
    void setMaxNumOfPatients(int num)       throw(int);
    void setMaxNumOfEmployees(int num)      throw(int);
    

    void addPatient(const Patient& newPatient)      throw();
    void removePatient(int ID)                      throw();
    void addEmployee(const Employee& newEmployee)   throw();
    void removeEmployee(int employeeID)             throw();
};

#endif /* _DEPARTMENT_H */
