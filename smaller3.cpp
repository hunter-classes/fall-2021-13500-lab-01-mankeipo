#include <iostream>
using namespace std;

int main() {
  int num1;
  int num2;
  int num3;
  cout << "Enter the first number: ";
  cin >> num1;
  cout << "Enter the second number: ";
  cin >> num2;
  cout << "Enter the third number: ";
  cin >> num3;
  if(num1 < num2) {
    if(num1 < num3){
      cout << num1;
    } else {
      cout << num3;
    }
  } else if (num2 < num3){
    cout << num2;
  } else {
    cout << num3;
  }
}
