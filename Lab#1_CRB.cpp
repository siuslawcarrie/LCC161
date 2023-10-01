/*
Program #1: Week 1, Introductory Exercise
Carrie Bailey
October 1, 2023
CS221 Fall 2023
Version #1
program to solicit name, favorite number and color from user
*/

#include <iostream>
using namespace std;

int main()
{
    string fav_color, name;
    int fav_number;
    cout  << "What is your name? "; //ask for user name
    cin>>name;
    cout << "Hello " << name << "!"; //greeting

    cout  << "What is your favorite number? "; //ask for user favorite number
    cin>>fav_number;
    cout  << "What is your favorite color? "; //ask for user favorite color
    cin>>fav_color;

    cout << "Okay, let me get this straight." <<endl;
    cout <<"Your favorite number is " <<fav_number<< " and your favorite color is " <<fav_color <<"."; //confirm user input
    return 0;
}
