#ifndef MONTHLY_BILL_H
#define MONTHLY_BILL_H

#include "phone_call.h"
#include <string>
#include <vector>

#define BASIC_FEE 20

class MonthlyBill {
    private:
        std::string month;
        std::vector<PhoneCall> local_calls;
        std::vector<PhoneCall> outer_calls;

    public:

        MonthlyBill(std::string _month);

        std::string show_month();

        void add_local_call(PhoneCall _call);

        void add_outer_call(PhoneCall _call);

        float calculate_outer_call_payment();

        float calculate_local_call_payment();

        float calculate_total_payment();

        void print_bill();

};

#endif
