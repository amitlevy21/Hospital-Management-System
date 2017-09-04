//
//  inspection.h
//  Hospital_project
//
//  Created by Moshe Sheena on 26/08/2017.
//  Copyright © 2017 Moshe Sheena. All rights reserved.
//

#ifndef inspection_h
#define inspection_h

#include "visit.h"

class Doctor;

char* labResult[] = {"POSITIVE", "NEGETIVE"};

class Inspection: public Visit
{
public:
    enum eLabResult {POSITIVE, NEGETIVE};
    
    //ctors
    Inspection(Visit& visit, const char* typeOfInspection, eLabResult labResult, Doctor** assignedDoctors = NULL);
    ~Inspection();
    
protected:
    char* typeOfInspection;
    Doctor** assignedDoctors;
    eLabResult labResult;
};

#endif /* inspection_h */
