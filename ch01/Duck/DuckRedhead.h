//
// Created by wangxing on 19-10-7.
//

#ifndef HFDP_DUCKREDHEAD_H
#define HFDP_DUCKREDHEAD_H

#include "Duck.h"

namespace duck
{

class DuckRedhead: public Duck
{
public:
    DuckRedhead() : Duck(new FlyWithWings, new QuackSqueak())
    {

    }
};

}

#endif //HFDP_DUCKREDHEAD_H
