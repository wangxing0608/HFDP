//
// Created by wangxing on 19-10-15.
//

#ifndef HFDP_SUBJECT_H
#define HFDP_SUBJECT_H

#include "Observer.h"

namespace weather
{

class Subject
{
public:
    virtual void registerObserver(Observer *ob)  = 0;
    virtual void removeObserver(Observer *ob) = 0;
    virtual void notifyObservers() = 0;
};
}

#endif //HFDP_SUBJECT_H
