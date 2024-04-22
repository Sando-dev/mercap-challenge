#ifndef MONTHLY_BILL_H
#define MONTHLY_BILL_H

#include "phone_call.h"

#include <vector>

class MonthlyBill {
    private:

        std::vector<PhoneCall> calls_record;

    public:

        MonthlyBill();

        float calculate_payment();

};

#endif
