#include "monthly_bill.h"

#include <iostream>

MonthlyBill::MonthlyBill(std::string _month) : month(_month) {}


float MonthlyBill::calculate_total_payment() {
    float total_payment = BASIC_FEE;
    total_payment += calculate_local_call_payment();
    total_payment += calculate_outer_call_payment();
    return total_payment;
}


void MonthlyBill::add_local_call(PhoneCall _call) {
    local_calls.emplace_back(_call);
}

void MonthlyBill::add_outer_call(PhoneCall _call) {
    outer_calls.emplace_back(_call);
}

float MonthlyBill::calculate_outer_call_payment() {
    float total_payment = 0;
    for(auto& call : outer_calls) {
        total_payment += call.show_total_cost();
    }
    return total_payment;
}

float MonthlyBill::calculate_local_call_payment() {
    float total_payment = 0;
    for(auto& call : local_calls) {
        total_payment += call.show_total_cost();
    }
    return total_payment;
}

std::string MonthlyBill::show_month() {
    return month;
}


void MonthlyBill::print_bill() {
    std::cout << show_month() << " Bill:" << std::endl;
    std::cout << "\t- Basic Fee: " << BASIC_FEE << " $" << std::endl;
    std::cout << "\t- Local Calls Usage: " << calculate_local_call_payment() << " $" << std::endl;
    std::cout << "\t- Outer Calls Usage: " << calculate_outer_call_payment() << " $" << std::endl;
    std::cout << "Total Fee: " << calculate_total_payment() << " $" << std::endl;
}