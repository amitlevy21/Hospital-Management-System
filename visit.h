//
//  visit.h
//  Hospital_project
//
//  Created by Moshe Sheena on 26/08/2017.
//  Copyright © 2017 Moshe Sheena. All rights reserved.
//

#ifndef _VISIT_H
#define _VISIT_H

#include <ctime>

class Department;
class Patient;
class CareGivingEmployee;

char* care[] = {"FIRST_AID", "TESTS", "SURGERY_PREP", "SURGERY"}; //for eCare

class Visit
{
public:
    enum eCare {FIRST_AID, TESTS, SURGERY_PREP, SURGERY};
    
    //ctors
    Visit(time_t* date, const char* cause, Department& department, Patient& patient, eCare typeOfCare, int maxNumOfSeeingStaff = 1) throw(const char*, int);

    Visit(time_t* date, const char* cause, Department& department, Patient& patient, eCare typeOfCare, const CareGivingEmployee*const* seeingStaff, int maxNumOfSeeingStaff = 1) throw(const char*, int);

    Visit(const Visit& other) = delete;

    virtual ~Visit();

    Visit operator=(const Visit& other);

    //getters
    const time_t* getDate()                       const;
    const char* getCause()                        const;
    const Department& getDepratment()             const;
    const Patient& getPatient()                   const;
    const CareGivingEmployee** getSeeingStaff()   const;
    const char* getTypeOfCare()                   const;
    int getMaxNumOfSeeingStaff()                  const;
    int getCurrentNumOfSeeingStaff()              const;
    
    //setters
    void setCause(const char* cause);
    void setTypeOfCare(eCare typeOfCare);
    
    //methods
    void addSeeingStaff(const CareGivingEmployee& employee) throw();
    void removeSeeingStaff(int employeeID)                  throw();
    void rescheduleVisit(const time_t* newDate)             throw();
    void changeDepartment(const Department &other)          throw();

protected:
    time_t *date;
    char *cause;
    Department &department;
    Patient &patient;
    int maxNumOfSeeingStaff;
    int currentNumOfSeeingStaff;
    CareGivingEmployee **seeingStaff;
    eCare typeOfCare;
};


#endif /* _VISIT_H */
