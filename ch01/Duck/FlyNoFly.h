//
// Created by wangxing on 19-10-7.
//

#ifndef HFDP_FLYNOFLY_H
#define HFDP_FLYNOFLY_H

#include <iostream>
#include "FlyBehavior.h"

namespace duck
{
// 继承虚基类
class FlyNoFly: public FlyBehavior
{
public:
    void fly()
    {
        std::cout << "I can't fly" << std::endl;
    }
};

}
#endif //HFDP_FLYNOFLY_H
