#include "area.h"

Area::Area(std::string _name, float _cost_per_minute) :
    name(_name),
    cost_per_minute(_cost_per_minute) {}


float Area::show_cpm() {
    return cost_per_minute;
}

std::string Area::show_name() {
    return name;
}