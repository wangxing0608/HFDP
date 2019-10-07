//
// Created by wangxing on 19-10-7.
//

#ifndef HFDP_QUACK_H
#define HFDP_QUACK_H

#include <iostream>
#include "QuackBehavior.h"

namespace duck
{

class Quack: public QuackBehavior
{
public:
    void quack()
    {
        std::cout << "This is my quack" << std::endl;
    }
};

}
#endif //HFDP_QUACK_H
