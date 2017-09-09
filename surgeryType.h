//
//  surgeryType.h
//  Hospital_project
//
//  Created by Moshe Sheena on 26/08/2017.
//  Copyright © 2017 Moshe Sheena. All rights reserved.
//

#ifndef surgeryType_h
#define surgeryType_h

class SurgeryType
{
protected:
    char* name;
    int durationMin;
    float precentageOfSuccess;
    int maxNumOfSurgeons;
public:
    SurgeryType(const char *name, int durationMin, float precentageOfSuccess, int maxNumOfSurgeons = 1) throw(const char*, int, float);

    const char* getName() const;

    void setName(const char *name) throw(const char*);

    int getDurationMin() const;

    void setDurationMin(int durationMin) throw(int);

    float getPrecentageOfSuccess() const;

    void setPrecentageOfSuccess(float precentageOfSuccess) throw(float);

    int getMaxNumOfSurgeons()       const;

    void setMaxNumOfSurgeons(int maxNumOfSurgeons) throw(int);
};



#endif /* surgeryType_h */
