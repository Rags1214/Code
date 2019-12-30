/**
 * Author: Chris Rangnow
 * Date:11-2-17
 * FileName: MultipleInheritance
 * Purpose: COP2350C Module 5
 */

#include "Reptilian.h"

Reptilian::Reptilian(): Alien() {
    race = "Reptilian";
}

Reptilian::Reptilian(const Reptilian& orig) {
}

Reptilian::~Reptilian() {
}

