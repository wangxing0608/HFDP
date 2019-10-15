//
// Created by wangxing on 19-10-15.
//

#ifndef HFDP_OBSERVER_H
#define HFDP_OBSERVER_H

namespace weather
{
class Observer
{
public:
    virtual void update() = 0;
};
}
#endif //HFDP_OBSERVER_H
