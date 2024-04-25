#ifndef INTERNATIONAL_CALL_H
#define INTERNATIONAL_CALL_H

#include "phone_call.h"
#include "country.h"

class InternationalCall : public PhoneCall {
    private:
        Country country;

    public:
        InternationalCall(float _duration, Country _country);
};


#endif