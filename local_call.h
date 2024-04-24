#ifndef LOCAL_CALL_H
#define LOCAL_CALL_H

#include "phone_call.h"

#define LOCAL_COST_PER_MINUTE 0.1
#define LOCAL_RUSH_HOUR_CPM 0.2
#define LOCAL_WEEKEND_CPM 0.1

enum class LocalCallType {
    NORMAL,
    RUSH_HOUR,
    WEEKEND
};

class LocalCall : public PhoneCall {
    private:
        LocalCallType type;

    public:
        LocalCall(float duration, LocalCallType _type = LocalCallType::NORMAL);

        float type_cpm(LocalCallType type);
};


#endif
