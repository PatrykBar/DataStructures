#include <iostream>
#include <list>
#include <windows.h>

using namespace std;

void push.front();
void push.back();
void pop.front();
void pop.back();
void insert();
void size();
void max_size();
void empty();
void remove();
void sort();
void reverse();
void exit();

void show();

list<int>lists;
int choice;

int main()
{

do
{

    show();

    cout << "Menu" << endl;

    cout << "1 - Push number to the front" << endl;
    cout << "2 - Push number to the back" << endl;
    cout << "3 - Pop number to the front" << endl;
    cout << "4 - Pop number to the back" << endl;
    cout << "5 - Insert number" << endl;
    cout << "6 - Check size of list" << endl;
    cout << "7 - Set Max_Size" << endl;
    cout << "8 - Remove" << endl;
    cout << "9 - Sort elements" << endl;
    cout << "10 - Revers list" << endl;
    cout << "11 - EXIT" << endl;

    cout << "Choice one function: "

    cin >> choice;

    switch (choice)
        {
            case 1:  push_front(); break;
            case 2:  push_back();  break;
            case 3:  pop_front();  break;
            case 4:  pop_back();   break;
            case 5:  size();       break;
            case 6:  max_size();   break;
            case 7:  empty();      break;
            case 8:  remove();     break;
            case 9:  sort();       break;
            case 10: reverse();    break;
            case 11: exit();       break;

            default:
            cout<<"ERROR!";
            Sleep(2000);
            break;
        }
} while (choice != 11)

    return 0;
}

void show()
{
    for (list<int>::iterator i = lists.begin(); i!=lists.end(); i++)
    {
        cout << *i << " ";
    }
}

void push.front();
{
    int number;

    cin >> number;

    lists.push_front(number);
}

void push.back();
{
    int number;

    cin >> number;

    lists.push_back(number);
}

void pop.front();
{
    lists.pop_front();
}

void pop.back();
{
    lists.pop_back();
}

void insert();
{
    int number;

    cin >> number;

    lists.insert(number);
}

void size();
{
    lists.size();
}

void max_size();
{
    lists.max_size();
}

void empty();
{
    lists.empty();
}

void remove();
{
    lists.remove();
}

void sort();
{
    lists.sort();
}

void reverse();
{
    lists.reverse():
}

void exit()
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
    cout<<"The program will be closed soon!";
    Sleep(2000);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
}
