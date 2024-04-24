#ifndef PHONE_CALL_H
#define PHONE_CALL_H

class PhoneCall {
    protected:

        const float cost_per_minute;
        float duration;

    public:

        PhoneCall(float _cost_per_minute,float _duration);

        float show_total_cost();

        float show_duration();

        float show_cpm();

};

#endif
