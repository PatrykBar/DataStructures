#include <iostream>
#include <windows.h>

using namespace std;

//int elements;
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

void show()
{
    system("CLS");
    cout << "ELEMENT ON STACK: " << endl;

    for (int i=0; i< index; i++)
    {
        cout << table[i] << " ";
    }
    cout << endl;
}

void menu()
{
        //cout << "How many elements do you want to save: ";
        //cin >> elements;
        //int table[elements+1];

        cout << "MENU\n" << endl;
        cout << "1 - Add element to stack" << endl;
        cout << "2 - Remove element from stack" << endl;
        cout << "3 - Checking if the stack is empty" << endl;
        cout << "4 - Checking size of stack" << endl;
        cout << "5 - EXIT" << endl;
        cout << "MAX ELEMENTS \"10\" " << endl;

        cin >> click;
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
        cout << "Remove last number" << endl;
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
    cout << "Size = " << index;
    Sleep(2000);
}
