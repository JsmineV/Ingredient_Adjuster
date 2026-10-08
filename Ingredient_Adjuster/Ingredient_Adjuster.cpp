
//This program is designed to help the user make the amount of cookies they want to make. 

#include <iostream>

int main()
{
    using namespace std; 
    cout << "Welcome to the Cookie Ingridient Adjuster!" << endl; 
    cout << "How many cookies do you want to make?" << endl; 

    int desiredCookies; 

    cin >> desiredCookies; 

    double multiplier = desiredCookies / 48.0; // 48 is the number of cookies from the original recipe 
    double sugar = 1.5 * multiplier;
    double butter = 1.0 * multiplier; 
    double flour = 2.75 * multiplier; 

    cout << "To make " << desiredCookies << " cookies, you will need:" << endl;


    cout << sugar << " cups of sugar." << endl;
    cout << butter << " cups of butter." << endl; 
    cout << flour << " cups of flour." << endl; 


}
