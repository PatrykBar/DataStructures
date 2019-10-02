#include <iostream>
#include <windows.h>

using namespace std;

int click;
int index=0;
int table[10];

void show();
void menu();
void push();
void pop();
void empty();
void size();

int main()
{
    do{

        show();
        menu();

        if (1<=click<=5)
        {
            switch (click)
            {
                case 1:
                    push();
                    break;
                case 2:
                    pop();
                    break;
                case 3:
                    empty();
                    break;
                case 4:
                    size();
                    break;
            }
        }

        else
        {
         cout << "Wrong choice" << endl;
         Sleep(2000);
        }

    } while(click!=5);

    return 0;
}

void menu()
{

        cout << "MENU\n" << endl;
        cout << "1 - Add element to Queue" << endl;
        cout << "2 - Remove element from Queue" << endl;
        cout << "3 - Checking if the Queue is empty" << endl;
        cout << "4 - Checking size of Queue" << endl;
        cout << "5 - EXIT" << endl;
        cout << "MAX ELEMENTS \"10\" " << endl;

        cin >> click;
}
void show()
{
    system("CLS");
    cout << "ELEMENT ON QUEUE: " << endl;

    for (int i=0; i< index; i++)
    {
        cout << table[i] << " ";
    }
    cout << endl;
}


void push()
{
    if (0<=index<=10)
    {
        cout << "ADD element: ";
        cin >> table[index];
        index++;
    }
    else
    {
        cout << "Full sorry" << endl;
        Sleep(2000);
    }
}

void pop()
{
    if (index !=0)
    {
        cout << "Remove first element" << endl;

        for (int i=0; i<index-1; i++)
        {
            table[i] = table[i+1];
        }

        index--;

        Sleep(2000);
    }
    else
    {
        cout << "empty !!" << endl;
        Sleep(2000);
    }
}

void empty()
{

    if (index == 0)
    {
        cout << "Empty" << endl;
        Sleep(2000);
    }

    else
    {
        cout << "Has elements" << endl;
        Sleep(2000);
    }

}

void size()
{
    if (index == 0)
    {
        empty();
    }
    else
    {
    cout << "Size = " << index;
    Sleep(2000);
    }

}
