//
//  surgery.h
//  Hospital_project
//
//  Created by Moshe Sheena on 26/08/2017.
//  Copyright © 2017 Moshe Sheena. All rights reserved.
//

#ifndef _SURGERY_H
#define _SURGERY_H

#include "visit.h"
#include "surgeryType.h"

const char* surgeryKind[] = {"ESTHETIC", "LIFE_SAVING"};

class Surgery: public Visit, public SurgeryType
{
public:
    enum eSurgeryKind {ESTHETIC, LIFE_SAVING};
    
    //ctors
    Surgery(Visit& visit, SurgeryType& type, eSurgeryKind surgeryType, int numOfSurgeons = 1, int durationMin = 15);
    
    //getters
    const char* getSurgeryType() const;
    int getNumOfSurgeons();
    int getDurationMin();
    
    //setters
    void setNumOfSurgeons(int numOfSurgeons)    throw(int);
    void setDurationMin(int duration)           throw(int);
    
private:
    eSurgeryKind kind;
    SurgeryType& type;
    int actualNumOfSurgeons;
    int actualDurationMin;
};


#endif /* _SURGERY_H */
