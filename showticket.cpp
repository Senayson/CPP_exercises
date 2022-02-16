#include <iostream>
#include <string>

using namespace std;

class ShowTicket {
  protected:
    string row;
    string seat;
    bool ticketSold;

  public:

    ShowTicket(string x, string y){
      row = x;
      seat = y;
      ticketSold = false;
    }

    bool is_sold(){
      return ticketSold;
    }

    void sell_seat(){
      ticketSold = true;
    }

    string print_ticket(){

      if(ticketSold == true){
        return row + " " + seat + " " +  "sold";
        } else {
        return row + " " + seat + " " + "available";
        }
    }

};

int main () {
  ShowTicket myticket1("AA","101");
  ShowTicket myticket2("AA","102");
  if(!myticket1.is_sold())
    myticket1.sell_seat ();
  cout << myticket1.print_ticket() << endl;
  cout << myticket2.print_ticket() << endl;
  return 0;
}