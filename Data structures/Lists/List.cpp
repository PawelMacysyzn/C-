#include <iostream>
#include <list>
#include <windows.h>
#include <string>
#include <sstream>

using namespace std;

list<int> my_list; // creating a list that stores integers
int choice;

//---------------------

int get_int()
{
    int var;
    string mystr;

    getline(std::cin, mystr); // #include <string>
    stringstream(mystr) >> var;
    return var;
}

//---------------------

void schow_list()
{
    system("CLS");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
    cout << " LIST CONTENT: " << endl;
    cout << "---------------------------" << endl;

    for (list<int>::iterator i = my_list.begin(); i != my_list.end(); ++i)
        cout << *i << " ";

    cout << endl;
    cout << "---------------------------" << endl
         << endl;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
}

//---------------------

void push_front()
{
    int number;
    cout << "What number to put at the beginning of the list: ";
    number = get_int();
    my_list.push_front(number);
}

//---------------------

void push_back()
{
    int number;
    cout << "What number to put at the end of the list: ";
    number = get_int();
    my_list.push_back(number);
}

//---------------------

void pop_front()
{
    cout << "The number from the beginning of the list will be removed";
    Sleep(2000);
    my_list.pop_front();
}

//---------------------

void pop_back()
{
    cout << "The number at the end of the list will be removed";
    Sleep(2000);
    my_list.pop_back();
}

//---------------------

void size()
{
    cout << "Numbers in the list: " << my_list.size();
    Sleep(2000);
}

//---------------------

void max_size()
{
    cout << "Max Numbers in the list: " << my_list.max_size();
    Sleep(5000);
}

//---------------------

void empty()
{
    cout << "Is the list empty? -> ";
    if (my_list.empty() == 1)
        cout << "TRUE";
    else
        cout << "FALSE";
    Sleep(2000);
}

//---------------------

void remove()
{
    int number;
    cout << "Remove all equal numbers from the list: ";
    number = get_int();
    my_list.remove(number);
}

//---------------------

void sort()
{
    cout << "The list will be sorted! ";
    my_list.sort();
    Sleep(2000);
}

//---------------------

void reverse()
{
    cout << "The order of the numbers has been reversed!";
    my_list.reverse();
    Sleep(2000);
}

//---------------------

void exit()
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
    cout << "Program End!";
    Sleep(2000);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0);
}
//---------------------

int main()
{

    do
    {

        schow_list();

        cout << " LIST MAIN MENU:" << endl;
        cout << "---------------------------" << endl;
        cout << "1.  push_front" << endl;
        cout << "2.  push_back" << endl;
        cout << "3.  pop_front" << endl;
        cout << "4.  pop_back" << endl;
        cout << "5.  size" << endl;
        cout << "6.  max_size" << endl;
        cout << "7.  empty" << endl;
        cout << "8.  remove" << endl;
        cout << "9.  sort" << endl;
        cout << "10. reverse" << endl;
        cout << "11. exit" << endl;
        cout << "---------------------------" << endl;
        cout << "Choice: ";
        choice = get_int();

        switch (choice)
        {
        case 1:
            push_front();
            break;
        case 2:
            push_back();
            break;
        case 3:
            pop_front();
            break;
        case 4:
            pop_back();
            break;
        case 5:
            size();
            break;
        case 6:
            max_size();
            break;
        case 7:
            empty();
            break;
        case 8:
            remove();
            break;
        case 9:
            sort();
            break;
        case 10:
            reverse();
            break;
        case 11:
            exit();
            break;

        default:
            cout << "MISTAKE!";
            Sleep(2000);
            break;
        }

    } while (choice != 11);

    return 0;
}
