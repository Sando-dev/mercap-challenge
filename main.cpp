#include "monthly_bill.h"

#include "local_call.h"
#include "international_call.h"
#include "national_call.h"

#include <iostream>

int main() {

    LocalCall primera(10);
    LocalCall segunda(10, LocalCallType::RUSH_HOUR);

    std::cout << primera.show_total_cost() << std::endl;
    std::cout << segunda.show_total_cost() << std::endl;

    Area bariloche("Bariloche",0.2);
    NationalCall tercera(10, bariloche);

    MonthlyBill may;
    may.add_call(primera);
    may.add_call(segunda);
    may.add_call(tercera);

    std::cout << may.calculate_payment() << std::endl;

    return 0;
}