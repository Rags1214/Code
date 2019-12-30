/**
 * Author: Chris Rangnow
 * Date:11-2-17
 * FileName: MultipleInheritance
 * Purpose: COP2350C Module 5
 */


#ifndef NAVY_H
#define NAVY_H

#include "Soldier.h"

class Navy : public Soldier {
public:
    Navy();
    Navy(const Navy& orig);
    virtual ~Navy();
private:

};

#endif /* NAVY_H */


