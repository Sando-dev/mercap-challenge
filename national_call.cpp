#include "national_call.h"


NationalCall::NationalCall(float _duration, Area _area) :
    PhoneCall(_area.show_cpm(), _duration),
    area(_area) {}