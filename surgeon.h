#ifndef SURGEON_H_INCLUDED
#define SURGEON_H_INCLUDED

#include "doctor.h"

class Surgeon : public Doctor
{
public:
    Surgeon(const Doctor& doctor, bool hasSecurityClearance, int numOfSuccesfullSurgeries);
    Surgeon(const Surgeon& other) = delete;
    virtual ~Surgeon();

    bool hasSecurityClearance() const;
    int getNumOfSuccesfullSurgeries() const;

protected:
    bool securityClearance;
    int numOfSuccesfullSurgeries;
};

#endif // SURGEON_H_INCLUDED
