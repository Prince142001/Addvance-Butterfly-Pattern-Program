#include<iostream>

using namespace std;

int main(void){
    for (int i = 1; i <= 6; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i == 1 || i == 6 || j == 1 || j == i)
            {
                cout << "* ";
                system("color 2");
            }
            else 
            {
                cout << "  ";
            }
        }
        int space=2*6-2*i;
        for (int j = 1; j <= space; j++)
        {
            cout<<"  ";
        }
        for (int j = 1; j <= i; j++)
        {
           if (i == 1 || i == 6 || j == 1 || j == i)
            {
                cout << "* ";
                system("color 2");
            }
            else
            {
                cout << "  ";
            }
        }
    cout<<endl;
    }
    for (int i = 5; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
           if (i == 1 || i == 6 || j == 1 || j == i)
            {
                cout << "* ";
                system("color 3");
            }
            else
            {
                cout << "  ";
            }
        }
        int space=2*6-2*i;
        for (int j = 1; j <= space; j++)
        {
            cout<<"  ";
        }
        for (int j = 1; j <= i; j++)
        {
            if (i == 1 || i == 6 || j == 1 || j == i)
            {
                cout << "* ";
                system("color 3");
            }
            else
            {
                cout << "  ";
            }
        }
        cout<<endl;
    } 
}