#ifndef COUNTRY_H
#define COUNTRY_H

#include <string>

class Country {
    private:
        std::string name;
        float cost_per_minute;

    public:
        Country(std::string _name, float _cost_per_minute);

        float show_cpm();

        std::string show_name();
};

#endif
