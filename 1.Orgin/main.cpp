#include <iostream>
#include <string>


using namespace std;

int main(void) {
    
    cout << "Hello there ..." << endl;

    cout << "Please give your name" << endl;

    // read user imput
    string str_name;
    getline(cin, str_name);

    cout << "Name: " << str_name << endl;


    return 0;
}