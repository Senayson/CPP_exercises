#include <iostream>
#include <string>
#include <map>

using namespace std;

class ShowTickets {
    using TicketsMap = map<std::pair<string,string>,bool>;
    static TicketsMap tickets; // needs to be defined outside the class
public:
    bool is_sold(string row, string seat_num){return tickets[{row,seat_num}];}

    void sell_seat(string row, string seat_num){tickets[{row,seat_num}]=true;}

    string print_ticket(string row, string seat_num) {
        return row + " " + seat_num + " " + (tickets[{row,seat_num}]?"sold":"available");
    }
};

ShowTickets::TicketsMap ShowTickets::tickets;



// int main() {
//     ShowTickets myticket;
//   if(!myticket.is_sold(“AA”,”101”))
//     myticket.sell_seat (“AA”,”101”);
//   cout << myticket.print_ticket(“AA”,”101”) << endl;
//   cout << myticket.print_ticket(“AA”,”102”) << endl;


//     return 0;
// }