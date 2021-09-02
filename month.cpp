#include <iostream>
using namespace std;

int main() {
  int day = 0;
  int year;
  int month;
  bool leap = true;
  cout << "Enter year: ";
  cin >> year;
  if(year%4 == 0) {
    if(year%100 != 0) {
      leap = true;
    } else if (year%100 == 0) {
      if(year%400 == 0) {
        leap = true;
      } else {
        leap = false;
      }
    }
  } else {
    leap = false;
  }
  cout << "Enter month: ";
  cin >> month;
  if (month > 0 && month < 13) {
    if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
      day += 31;
    } else {
      day += 30;
    }
  }
  if(month == 2) {
    if(leap){
      day++;
    }
  }
  cout << "\n" << day << " days";
}
