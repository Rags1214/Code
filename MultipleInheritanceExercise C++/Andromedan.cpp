/**
 * Author: Chris Rangnow
 * Date:11-2-17
 * FileName: MultipleInheritance
 * Purpose: COP2350C Module 5
 */


#include "Andromedan.h"

Andromedan::Andromedan(): Alien() {
    race = "Andromedan";
}

Andromedan::Andromedan(const Andromedan& orig) {
}

Andromedan::~Andromedan() {
}