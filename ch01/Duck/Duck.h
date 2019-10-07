//
// Created by wangxing on 19-10-6.
//

#ifndef HFDP_DUCK_H
#define HFDP_DUCK_H

#include "Quack.h"
#include "QuackSqueak.h"
#include "FlyWithWings.h"
#include "FlyNoFly.h"

namespace duck
{

class Duck {
public:
    void performQuack()
    {
        qb -> quack();
    }
    void performFly()
    {
        fb -> fly();
    }
    ~Duck()
    {
        delete qb;
        delete fb;
    }

protected:
    QuackBehavior *qb;
    FlyBehavior *fb;
    Duck(FlyBehavior *f, QuackBehavior *q)
    {
        qb = q;
        fb = f;
    }
};

}
#endif //HFDP_DUCK_H
