#ifndef MONTHLY_BILL_H
#define MONTHLY_BILL_H

#include "phone_call.h"

#include <vector>

class MonthlyBill {
    private:

        std::vector<PhoneCall> calls_record;

    public:

        MonthlyBill();

        void add_call(PhoneCall _call);

        float calculate_payment();

};

#endif
