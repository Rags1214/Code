/**
 * Author: Chris Rangnow
 * Date:11-2-17
 * FileName: MultipleInheritance
 * Purpose: COP2350C Module 5
 */

#include "Anunnaki.h"

Anunnaki::Anunnaki(): Alien() {
    race = "Anunnaki";
}

Anunnaki::Anunnaki(const Anunnaki& orig) {
}

Anunnaki::~Anunnaki() {
}