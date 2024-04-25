#ifndef AREA_H
#define AREA_H

#include <string>

class Area {
    private:
        std::string name;
        float cost_per_minute;

    public:
        Area(std::string _name, float _cost_per_minute);

        float show_cpm();

        std::string show_name();
};


#endif
