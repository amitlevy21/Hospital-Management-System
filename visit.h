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
    Visit(time_t* date, const char* cause = "general", Department& department, Patient& patient, eCare typeOfCare, int maxNumOfSeeingStaff = 1);

    Visit(time_t* date, const char* cause = "general", Department& department, Patient& patient, eCare typeOfCare, const CareGivingEmployee*const* seeingStaff, int maxNumOfSeeingStaff = 1);

    Visit(const Visit& other) = delete;

    ~Visit();

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
    bool addSeeingStaff(const CareGivingEmployee& employee);
    bool removeSeeingStaff(int employeeID);
    bool rescheduleVisit(const time_t* newDate);
    bool changeDepartment(const Department &other);

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
