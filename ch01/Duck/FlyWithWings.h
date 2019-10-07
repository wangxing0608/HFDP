//
// Created by wangxing on 19-10-7.
//

#ifndef HFDP_FLYWITHWINGS_H
#define HFDP_FLYWITHWINGS_H

#include <iostream>
#include "FlyBehavior.h"

namespace duck
{
// 继承虚基类
class FlyWithWings: public FlyBehavior
{
public:
    void fly()
    {
        std::cout << "I am flying with wings" << std::endl;
    }
};

}
#endif //HFDP_FLYWITHWINGS_H
