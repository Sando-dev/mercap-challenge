#include "phone_call.h"


PhoneCall::PhoneCall(float _cost_per_minute, float _duration) : 
        cost_per_minute(_cost_per_minute),
        duration(_duration) {}


float PhoneCall::show_total_cost() {
    return cost_per_minute * duration;
}