#include "monthly_bill.h"

#include "local_call.h"
#include "international_call.h"
#include "national_call.h"

#include <iostream>

int main() {

    LocalCall primera(10);
    LocalCall segunda(10, LocalCallType::RUSH_HOUR);

    Area bariloche("Bariloche",0.2);
    NationalCall tercera(10, bariloche);

    Country uruguay("Uruguay",0.5);
    InternationalCall cuarta(10, uruguay);

    MonthlyBill may("May");

    may.add_local_call(primera);
    may.add_local_call(segunda);
    may.add_outer_call(tercera);
    may.add_outer_call(cuarta);

    may.print_bill();

    return 0;
}