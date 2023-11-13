#include <iostream>
#include "temperature.h"

int main()
{
    double fahrenheit = 75.5;
    double celsius = convert_to_celsius(fahrenheit);
    std::cout << fahrenheit << " degrees Fahrenheit is " << celsius << " degrees Celsius." << std::endl;
    return 0;
}
