#include "local_call.h"

LocalCall::LocalCall(float _duration, LocalCallType _type) :
    PhoneCall(type_cpm(_type), _duration),
    type(_type) {}


float LocalCall::type_cpm(LocalCallType type) {
    switch (type) {
        case LocalCallType::NORMAL:
            return LOCAL_COST_PER_MINUTE;
        case LocalCallType::RUSH_HOUR:
            return LOCAL_RUSH_HOUR_CPM;
        case LocalCallType::WEEKEND:
            return LOCAL_WEEKEND_CPM;
        default:
            throw "Local Call Type not define.";
    }
}

