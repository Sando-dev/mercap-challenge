#include "monthly_bill.h"
#include "local_call.h"

#include <iostream>

int main() {

    LocalCall primera(10);
    LocalCall segunda(10, LocalCallType::RUSH_HOUR);

    std::cout << primera.show_total_cost() << std::endl;
    std::cout << segunda.show_total_cost() << std::endl;


    return 0;
}