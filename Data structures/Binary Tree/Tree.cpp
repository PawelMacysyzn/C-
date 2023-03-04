#include <iostream>
#include <windows.h>
 
using namespace std;
 
//---------------------- GLOBAL VARIABLES----------------------------
int choice;
int *root;
 
//-------- VOID SETTING THE CURSOR AT THE X,Y LOCATION ON THE SCREEN --------
 
void gotoxy(int x, int y)
{
  COORD c;
  c.X=x-1;
  c.Y=y-1;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),c);
}
 
//-------------------------- VARIABLES ------------------------------
 
    int data_of_tree[16];
    bool empty_data[16];
 
 
//----------------------- TREE DISPLAY -----------------------
void schow_tree()
{
system("CLS");
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),14);
//tree display
gotoxy(40,1); if (empty_data[1]==true) cout<<"_"; else cout<<data_of_tree[1];
gotoxy(20,4); if (empty_data[2]==true) cout<<"_"; else cout<<data_of_tree[2];
gotoxy(60,4); if (empty_data[3]==true) cout<<"_"; else cout<<data_of_tree[3];
gotoxy(10,6); if (empty_data[4]==true) cout<<"_"; else cout<<data_of_tree[4];
gotoxy(30,6); if (empty_data[5]==true) cout<<"_"; else cout<<data_of_tree[5];
gotoxy(50,6); if (empty_data[6]==true) cout<<"_"; else cout<<data_of_tree[6];
gotoxy(70,6); if (empty_data[7]==true) cout<<"_"; else cout<<data_of_tree[7];
gotoxy(5,10); if (empty_data[8]==true) cout<<"_"; else cout<<data_of_tree[8];
gotoxy(15,10); if (empty_data[9]==true) cout<<"_"; else cout<<data_of_tree[9];
gotoxy(25,10); if (empty_data[10]==true) cout<<"_"; else cout<<data_of_tree[10];
gotoxy(35,10); if (empty_data[11]==true) cout<<"_"; else cout<<data_of_tree[11];
gotoxy(45,10); if (empty_data[12]==true) cout<<"_"; else cout<<data_of_tree[12];
gotoxy(55,10); if (empty_data[13]==true) cout<<"_"; else cout<<data_of_tree[13];
gotoxy(65,10); if (empty_data[14]==true) cout<<"_"; else cout<<data_of_tree[14];
gotoxy(75,10); if (empty_data[15]==true) cout<<"_"; else cout<<data_of_tree[15];
cout<<endl<<endl<<endl;
SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
}
 
//------------------- ADD THE NUMBER TO THE TREE ------------------------
void add()
{
    int number;
    cout<<"What number to add to the tree: ";
    cin>>number;
 
    //empty tree
    if (empty_data[1]==true)
    {
        root=&data_of_tree[1];
        *root=number;
        empty_data[1]=false;
    }
    else //not empty tree
    {
    bool found_a_place=false;
    int node=1;
 
    while (found_a_place==false)
    {
        if (empty_data[node]==true)
        {
            found_a_place=true;
            data_of_tree[node]=number;
            empty_data[node]=false;
 
        }
        else if(number<data_of_tree[node])
        {
            //to the left
            node=2*node;
        }
        else
        {
            //to the right
            node=2*node+1;
        }
        if(node>15)
        {
            cout<<"A bigger tree would be needed!";
            Sleep(3000);
            found_a_place=true;
        }
    }
    }
 
}
 
void find()
{
int number;
cout<<"What number can you find in the tree: ";
cin>>number;
 
bool found=false;
int node=1;
 
    while (found==false)
    {
        if(number==data_of_tree[node])
        {
            cout<<"Numerous found in node no: "<<node;
            Sleep(3000);
 
            found=true;
        }
        else if(number<data_of_tree[node])
        {
            //to the left
            node=2*node;
        }
        else
        {
            //to the right
            node=2*node+1;
        }
        if(node>15)
        {
            cout<<"Not found!";
            Sleep(3000);
            found=true;
        }
    }
}
 
 
//----------------------- MAIN PROGRAM ----------------------------
int main()
{
    for (int i=1; i<=15; i++)
    {
        empty_data[i]=true;
    }
    root=NULL;
 
    do
    {
    schow_tree();
 
    cout<<"----------------------------------"<<endl;
    cout<<"   BINARY TREE EMULATOR "<<endl;
    cout<<"----------------------------------"<<endl;
    cout<<"1. ADD (adds an item to the tree)"<<endl;
    cout<<"2. FIND (searches for an element in the tree)"<<endl;
    cout<<"3. EXIT (ends this program)"<<endl;
    cout<<"----------------------------------"<<endl;
    cout<<"   CHOICE: ";
    cin>>choice;
    cout<<endl;
 
    switch(choice)
    {
        case 1: add(); break;
        case 2: find(); break;
    }
 
    }while (choice!=3);
 
 
 
 
    return 0;
}
