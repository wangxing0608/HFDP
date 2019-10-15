//
// Created by wangxing on 19-10-15.
//

#ifndef HFDP_TEMPERATUREONLYDISPLAY_H
#define HFDP_TEMPERATUREONLYDISPLAY_H

#include "WeatherData.h"
#include "Observer.h"
#include "DisplayElement.h"

namespace weather
{
    using std::cout;
    using std::endl;

class TemperatureOnlyDisplay: public Observer, public DisplayElement
{
public:
    TemperatureOnlyDisplay(WeatherData *wd)
    {
        weatherData = wd;
        wd -> registerObserver(this);
    }

    void update()
    {
        temp = weatherData -> getTemp();
        display();
    }

    void display()
    {
        cout << "TemperatureOnlyDisplay displaying:" << endl;
        cout << "Temperature: " << temp << endl;
        cout << endl;
    }

private:
    WeatherData *weatherData;
    int temp;
    int humidity;
    int pressure;
};
}
#endif //HFDP_TEMPERATUREONLYDISPLAY_H
