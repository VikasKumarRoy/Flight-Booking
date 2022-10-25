#include<iostream>

using namespace std;
#define size 100

class airlines {
  public:
    airlines();
  void main_menu();
  void make_reservation();
  void cancel_reservation();
  void search_passenger();
  void change_reservation();
  void print_list();
  void print_report();

  private:
    struct node {
      string fname, lname, ID, phone_num, menu;
      int reserve_num, seat_num;

      node * next;

    };

  node * start;

  node * temp, * temp2;

}
bluesky;
