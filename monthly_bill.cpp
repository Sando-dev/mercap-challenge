#include "monthly_bill.h"

MonthlyBill::MonthlyBill() {}


void MonthlyBill::add_call(PhoneCall _call) {
    calls_record.emplace_back(_call);
}


float MonthlyBill::calculate_payment() {
    float total_payment = 0;
    for(auto& call : calls_record) {
        total_payment += call.show_total_cost();
    }
    return total_payment;
}