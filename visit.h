//
//  visit.h
//  Hospital_project
//
//  Created by Moshe Sheena on 26/08/2017.
//  Copyright © 2017 Moshe Sheena. All rights reserved.
//

#ifndef visit_h
#define visit_h

#include <ctime>

char* care[] = {"FIRST_AID", "TESTS", "SURGERY_PREP", "SURGERY"};

class Visit
{
public:
    enum eCare {FIRST_AID, TESTS, SURGERY_PREP, SURGERY};
    
    //ctors
    Visit(time_t*, const char* cause, Department& department, Patient& patient, eCare typeOfCare, int maxNumOfSeeingStaff = 1);
    Visit(time_t*, const char* cause, Department& department, Patient& patient, eCare typeOfCare, const CareGivingEmployee** seeingStaff, int maxNumOfSeeingStaff);
    Visit(const Visit& other) = delete;
    
    //getters
    const time_t* getDate()                     const;
    const char* getCause()                      const;
    const Department& getDepratment             const;
    const Patient& getPatient()                 const;
    const CareGivingEmployee[]& getSeeingStaff() const;
    const char* getTypeOfCare()                 const;
    int getMaxNumOfSeeingStaff()                const;
    int getCurrentNumOfSeeingStaff()            const;
    
    //setters
    void setCause(const char* cause);
    void setDepartment(Department& department);
    void setPatient(Patient& patient);
    void setTypeOfCare(eCare typeOfCare);
    
    //methods
    bool addSeeingStaff(const CareGivingEmployee& employee);
    bool removeSeeingStaff(int employeeID);

protected:
    time_t*  date;
    char* cause;
    Department department;
    Patient patient;
    int maxNumOfSeeingStaff;
    int currentNumOfSeeingStaff;
    CareGivingEmployee** seeingStaff;
    eCare typeOfCare;
};


#endif /* visit_h */
