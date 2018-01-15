#include <iostream>
#include <string>

using namespace std;

class Person {
private:
  string name;
  string email_address;
  string phone_number;
public:
  Person(string aName, string anEmailAddress, string aPhoneNumber){
    name = aName;
    email_address = anEmailAddress;
    phone_number = aPhoneNumber;
  }
  void printOn(ostream & out){
    out << name
        << "  email: "
        << email_address
        << "  phone: "
        << phone_number;
  }

};
