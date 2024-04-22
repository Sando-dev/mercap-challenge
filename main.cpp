#include "monthly_bill.h"
#include "local_call.h"

#include <iostream>

int main() {

    LocalCall primera(10);

    std::cout << primera.show_total_cost() << std::endl;

    return 0;
}