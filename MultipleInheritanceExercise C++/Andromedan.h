/**
 * Author: Chris Rangnow
 * Date:11-2-17
 * FileName: MultipleInheritance
 * Purpose: COP2350C Module 5
 */

#ifndef ANDROMEDAN_H
#define ANDROMEDAN_H

#include "Alien.h"

class Andromedan : public Alien {
public:
    Andromedan();
    Andromedan(const Andromedan& orig);
    virtual ~Andromedan();
private:

};

#endif /* ANDROMEDAN_H */