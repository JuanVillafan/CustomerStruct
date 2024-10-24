#include <iostream>
#include <string>

#include "CustomerStruct.h"
using namespace std;



int main()
{
    Customer customer;
    //Store Info____
    cout << "Input your ID : ";
    getline(cin, customer.ID);

    cout << "Enter your name : ";
    getline(cin, customer.name);

    cout << "Enter your Email : ";
    getline(cin, customer.email);

    //Print Info____
    cout << "Your ID is : " << customer.ID << endl;

    cout << "Your name is : " << customer.name << endl;

    cout << "Your email is : " << customer.email << endl;

    return 0;

}
