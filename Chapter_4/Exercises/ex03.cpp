#include <iostream>
#include <cstring>
using namespace std;

int main()
{
  char first_name[50];
  char last_name[50];
  char res[100];
  cout << "Enter your first name: ";
  cin.getline(first_name,50);
  cout << "Enter your last name: ";
  cin.getline(last_name,50);
  strcpy(res, last_name);
  strcat(res,", ");
  strcat(res,first_name);
  cout << "Here's the information in a single string: " << res << endl;
  
  return 0;
}
