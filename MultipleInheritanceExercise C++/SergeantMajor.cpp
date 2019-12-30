/**
 * Author: Chris Rangnow
 * Date:11-2-17
 * FileName: MultipleInheritance
 * Purpose: COP2350C Module 5
 */

#include "SergeantMajor.h"
#include <iostream>

using namespace std;

SergeantMajor::SergeantMajor(string nameIn): Marine() {
    name = nameIn;
    cout << nameIn << " is a Sergeant Major" << endl;
}

SergeantMajor::SergeantMajor(const SergeantMajor& orig) {
}

SergeantMajor::~SergeantMajor() {
}