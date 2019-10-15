//
// Created by wangxing on 19-10-15.
//

#ifndef HFDP_WEATHERDATA_H
#define HFDP_WEATHERDATA_H

#include <iostream>
#include <vector>
#include <algorithm>

#include "Subject.h"
#include "Observer.h"

namespace weather
{
    using std::cout;
    using std::endl;

class WeatherData: public Subject
{
public:
    WeatherData() : temp(0), humidity(0), pressure(0)
    {

    }

    void registerObserver(Observer *ob)
    {
        observers.push_back(ob);
    }

    void removeObserver(Observer *ob)
    {
        std::vector<Observer *>::iterator found = std::find(observers.begin(), observers.end(), ob);
        if (found != observers.end())
        {
            observers.erase(found);
        }
    }

    void notifyObservers()
    {
        for (std::vector<Observer *>::iterator it = observers.begin(); it != observers.end(); it++)
        {
            (*it) -> update();
        }
    }

    int getTemp()
    {
        return temp;
    }

    int getHumidity()
    {
        return humidity;
    }

    int getPressure()
    {
        return pressure;
    }

    void measurementChanged()
    {
        notifyObservers();
    }

    void setMeasurement(int t = 1, int h = 2, int p = 3)
    {
        temp = t;
        humidity = h;
        pressure = p;
        measurementChanged();
    }


private:
    std::vector<Observer *> observers;
    int temp;
    int humidity;
    int pressure;
};
}


#endif //HFDP_WEATHERDATA_H
