#include "weather_station.hpp"
#include "current_conditions.hpp"

int main(int, char**)
{
    WeatherStation* ws = new WeatherStation();

    CurrentConditions* cc1 = new CurrentConditions(ws);
    CurrentConditions* cc2 = new CurrentConditions(ws);

    ws->setMeasurements(1.0, 2.0, 3.0);
    return 0;
}
