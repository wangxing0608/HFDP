//
// Created by wangxing on 19-10-7.
//

#ifndef HFDP_QUACKSQUEAK_H
#define HFDP_QUACKSQUEAK_H

#include <iostream>
#include "QuackBehavior.h"

namespace duck
{

class QuackSqueak: public QuackBehavior
{
public:
    void quack()
    {
        std::cout << "This is my squeak" << std::endl;
    }
};

}

#endif //HFDP_QUACKSQUEAK_H
