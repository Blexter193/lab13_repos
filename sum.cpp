//
//  sum.cpp
//  Lab_13_1
//
//  Created by USER on 16.12.2022.
//

#include <math.h>

#include "dod.h"
#include "sum.h"
#include "var.h"

using namespace nsDod;
using namespace nsVar;

void nsSum::sum(){
    n = 0;
    a = 1. / x;
    s = a;
    do{
        n++;
        dod();
        s += a;
    } while(fabs(a) >= e);
}
