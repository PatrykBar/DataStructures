#include <iostream>
#include <list>
#include <windows.h>

using namespace std;

void push_front();
void push_back();
void pop_front();
void pop_back();
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

    cout << "Choice one function: ";

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
} while (choice != 11);

    return 0;
}

void show()
{
    system("CLS");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),10);
    cout << "LIST" << endl;
    for (list<int>::iterator i = lists.begin(); i!=lists.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),15);
}

void push_front()
{
    int number;

    cout << "Push to the front of list number: ";
    cin >> number; cout << endl;

    lists.push_front(number);
    //Sleep(2000);
}

void push_back()
{
    int number;

    cout << "Push to the back of list number: ";
    cin >> number; cout << endl;

    lists.push_back(number);
    //Sleep(2000);
}

void pop_front()
{
    cout << "Pop number from front of list" << endl;
    lists.pop_front();
    Sleep(1000);
}

void pop_back()
{
    cout << "Pop number from back of list" << endl;
    lists.pop_back();
    Sleep(1000);
}

void size()
{
    cout << "Size of list: " + lists.size() << endl;
    Sleep(2000);
}

void max_size()
{
    cout << "Max size of list is: " + lists.max_size() << endl;
    Sleep(2000);
}

void empty()
{
    cout << "Checking if the list is empty" << endl;
    if (!lists.empty())
        cout << "List is not empty" << endl;
    else
        cout << "List is empty :) " << endl;
    Sleep(2000);
}

void remove()
{
    int numbers;
    cout << "Delete numbers: ";
    cin >> numbers; cout << endl;
    lists.remove(numbers);
    //Sleep(2000);
}

void sort()
{
    cout << "Sorting list...." << endl;
    lists.sort();
    Sleep(2000);
}

void reverse()
{
    cout << "Revers of list" << endl;
    lists.reverse();
    Sleep(2000);
}

void exit()
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),12);
    cout<<"The program will be closed soon!";
    Sleep(2000);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),0);
}
