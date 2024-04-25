#ifndef NATIONAL_CALL_H
#define NATIONAL_CALL_H

#include "phone_call.h"
#include "area.h"

class NationalCall : public PhoneCall {
    private:
        Area area;

    public:
        NationalCall(float _duration, Area _area);
};


#endif