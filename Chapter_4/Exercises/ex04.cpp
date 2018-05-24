#include <iostream>
#include <string>
using namespace std;

int main()
{
  string first_name;
  string last_name;
  string res;
  cout << "Enter your first name: ";
  getline(cin,first_name);
  cout << "Enter your last name: ";
  getline(cin,last_name);
  res = last_name;
  res = res + ", ";
  res += first_name;
  cout << "Here's the information in a single string: " << res << endl;
  
  return 0;
}
