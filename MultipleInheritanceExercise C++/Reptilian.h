/**
 * Author: Chris Rangnow
 * Date:11-2-17
 * FileName: MultipleInheritance
 * Purpose: COP2350C Module 5
 */


#ifndef REPTILIAN_H
#define REPTILIAN_H

#include "Alien.h"

class Reptilian : public Alien {
public:
    Reptilian();
    Reptilian(const Reptilian& orig);
    virtual ~Reptilian();
private:

};

#endif /* REPTILIAN_H */

