//
//  surgery.h
//  Hospital_project
//
//  Created by Moshe Sheena on 26/08/2017.
//  Copyright © 2017 Moshe Sheena. All rights reserved.
//

#ifndef surgery_h
#define surgery_h

char* surgeryType[] = {"ESTHETIC", "LIFE_SAVING"};

class Surgery: public Visit, public SurgeryType
{
public:
    enum eSurgeryType {ESTHETIC, LIFE_SAVING};
    
    //ctors
    Surgery(Visit& visit, SurgeryType& surgeryType, eSurgeryType surgeryType, int numOfSurgeons = 1, int durationMin = 15);
    
    //getters
    const char* getSurgeryType() const;
    int getNumOfSurgeons();
    int getDurationMin();
    
    //setters
    bool setNumOfSurgeons(int numOfSurgeons);
    bool setDurationMin(int duration);
    
protected:
    EsurgeryType surgeryType;
    int numOfSurgeons;
    int durationMin;
    
};


#endif /* surgery_h */
