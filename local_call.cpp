#include "local_call.h"

#define LOCAL_COST_PER_MINUTE 0.1


LocalCall::LocalCall(float _duration) :
    PhoneCall(LOCAL_COST_PER_MINUTE, _duration) {}