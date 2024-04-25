#include "country.h"

Country::Country(std::string _name, float _cost_per_minute) :
    name(_name),
    cost_per_minute(_cost_per_minute) {}


float Country::show_cpm() {
    return cost_per_minute;
}

std::string Country::show_name() {
    return name;
}