#include "international_call.h"

InternationalCall::InternationalCall(float _duration, Country _country) :
    PhoneCall(_country.show_cpm(), _duration),
    country(_country) {}

