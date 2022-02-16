#include <iostream>
#include <string>
#include "sportticket.h"

using namespace std;

class TicketSales {

    public:

        string print_ticket(ShowTicket *myticket){

           return myticket->print_ticket();

        }









};

















// int main () {
//   TicketSales ts;
//   ShowTicket myticket1("AA","101");
//   SportTicket myticket2("AA","102");
//   myticket1.sell_seat();
//   myticket2.sell_seat();
//   myticket2.sell_beer();
//   cout << ts.print_ticket(&myticket1);
//   cout << ts.print_ticket(&myticket2);
//   return 0;
// }