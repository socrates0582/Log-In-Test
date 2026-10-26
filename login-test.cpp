#include <iostream>
#include <string>
using namespace std;

int main() 
{
    int ch, password;
    
    cout << "Enter your ID Number: ";
    cin >> ch;
    
   while (ch != 12345678)
   {
        cout << "ID number not found\n\n";
        cout << "Enter your username: ";
        cin >> ch;
   }
   cout << ch << ", enter your 4 digit pin: ";
   cin >> password;

   while (password != 1234)
   {
        cout << "Incorrect pin.\n\n";
        cout << ch << ", enter your 4 digit pin: ";
        cin >> password;
   }

        cout << "\nHello Billy Bob! Here is your info:\n";
        cout << "\nAddress: 123 Main St, Anytown, NY 12345";
        cout << "\nPhone: 555-123-4567";
        cout << "\nBirthday: January 2, 2000";
        cout << "\nEmail: someone@outlook.com";

   return 0;
}