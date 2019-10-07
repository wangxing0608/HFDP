//
// Created by wangxing on 19-10-7.
//

#ifndef HFDP_DUCKMALLARD_H
#define HFDP_DUCKMALLARD_H

#include "Duck.h"

namespace duck
{

class DuckMallard: public Duck
{
public:
    DuckMallard() : Duck(new FlyNoFly, new Quack)
    {

    }
};

}
#endif //HFDP_DUCKMALLARD_H
