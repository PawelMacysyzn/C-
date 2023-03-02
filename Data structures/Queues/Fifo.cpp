#include <iostream>
#include <windows.h>
#include <string>
#include <sstream>

using namespace std;

int cells[5];
int dimension;
int head;
int tail;

//-------------------------------
void schow_queue()
{
    system("CLS");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);

    cout << endl;
    cout << "-------------------" << endl;
    cout << "QUEUE CONTENT: " << endl;
    cout << "-------------------" << endl;

    if (dimension == 0)
    {
        cout << "empty";
    }

    else
    {

        int index;

        for (int i = 0; i < dimension; i++)
        {
            index = head + i;
            if (head + i >= 5)
                index = head + i - 5;
            cout << cells[index] << " ";
        }
    }

    cout << endl
         << "-------------------" << endl
         << endl;

    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
}
//-----------------------------
int get_int()
{
    int var;
    string mystr;

    getline(std::cin, mystr);
    stringstream(mystr) >> var;
    return var;
}
//-----------------------------
void push()
{
    if (dimension >= 5)
    {
        cout << "Queue full!";
        Sleep(1000);
    }
    else if (dimension == 0)
    {
        cout << endl
             << "PUSH (what number to put in the queue): ";
        cells[tail] =  get_int();
        tail = tail + 1;
        dimension = dimension + 1;
    }
    else
    {
        cout << endl
             << "PUSH (what number to put in the queue): ";
        cells[tail] =  get_int();
        tail = (tail + 1) % 5;
        dimension = dimension + 1;
    }
}
//-------------------------------
void pop()
{
    if (dimension == 0)
    {
        cout << "The queue is empty!";
        Sleep(2000);
    }
    else
    {
        cout << endl
             << "POP - number is removed from the queue: " << cells[head];
        head = (head + 1) % 5;
        dimension = dimension - 1;
        Sleep(2000);
    }
}
//-------------------------------
void size()
{
    cout << endl
         << "The number of items in the queue: " << dimension;
    Sleep(2000);
}
//-------------------------------
void empty()
{

    if (dimension == 0)
        cout << endl
             << "EMPTY (empty queue?) ->  TRUE";
    else
        cout << endl
             << "EMPTY (empty queue?) ->  FALSE";
    Sleep(2000);
}
//-------------------------------
int main()
{

    int choice;
    dimension = 0;
    head = 0;
    tail = 0;

    do
    {

        schow_queue();

        cout << "QUEUE MAIN MENU:" << endl;
        cout << "------------------------------------------" << endl;
        cout << "1. PUSH (adds an element to the end of the queue) " << endl;
        cout << "2. POP (removes an element from the top of the queue) " << endl;
        cout << "3. SIZE (dimension elementow w kolejce) " << endl;
        cout << "4. EMPTY (if the queue is empty?) " << endl;
        cout << "5. Program End " << endl;
        cout << "------------------------------------------" << endl;
        cout << "Choice: ";
        choice =  get_int();

        switch (choice)
        {
        case 1:
            push();
            break;

        case 2:
            pop();
            break;

        case 3:
            size();
            break;

        case 4:
            empty();
            break;
        }

    } while (choice != 5);

    return 0;
}
