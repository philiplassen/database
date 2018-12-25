#include <iostream>
using namespace std;

class myClass {
  public:
    string firstName;
    string lastName;
};


int main() {
  myClass obj;
  cout << "What is your first name?\n";
  cin >> obj.firstName;
  cout << "What is your last name?\n";
  cin >> obj.lastName;
  cout << "Your name is " << obj.firstName << " " << obj.lastName << endl;
  return 0;
}
