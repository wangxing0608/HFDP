//
// Created by wangxing on 19-10-15.
//

#include <iostream>

#include "WeatherData.h"
#include "CurrentConditionDisplay.h"
#include "TemperatureOnlyDisplay.h"

int main()
{
    weather::WeatherData wd;
    weather::CurrentConditionsDisplay ccd = weather::CurrentConditionsDisplay(&wd);
    weather::TemperatureOnlyDisplay tod = weather::TemperatureOnlyDisplay(&wd);

    wd.setMeasurement(3, 2, 1);
    wd.removeObserver(&tod);
    wd.setMeasurement(4, 5, 6);

    return 0;
}