#include <iostream>
#include <string>
#include "showticket.h"

using namespace std;

class SportTicket: public ShowTicket  {

    bool beerSold;

    public:

        SportTicket(string x, string y) : ShowTicket(x, y) {
            beerSold = false; 
        }

        bool beer_sold(){
            return beerSold;
        }

        void sell_beer(){
            beerSold = true;
        }

        string print_ticket(){

      if(is_sold() == true){
          if(beerSold == true){
            return row + " " + seat + " " +  "sold" + " " + "beer";
          } else {
              return row + " " + seat + " " +  "sold" + " " + "nobeer";
          }
        } else {

        return row + " " + seat + " " + "available";
        
        }
    }

};



int main () {
  SportTicket myticket1("AA","101");
  SportTicket myticket2("AA","102");
  myticket1.sell_seat();
  myticket2.sell_seat();
  myticket2.sell_beer();
  cout << myticket1.print_ticket() << endl;
  cout << myticket2.print_ticket() << endl;
  return 0;
}

