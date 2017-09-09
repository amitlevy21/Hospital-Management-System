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

const char* labResult[] = {"POSITIVE", "NEGETIVE"};

class Inspection: public Visit
{
public:
    enum eLabResult {POSITIVE, NEGETIVE};
    
    //ctors
    Inspection(Visit& visit, const char* typeOfInspection, eLabResult labResult);
    ~Inspection() throw(const char*);

    const Inspection& operator=(const Inspection& other);
    
protected:
    char* typeOfInspection;
    eLabResult labResult;
};

#endif /* inspection_h */
