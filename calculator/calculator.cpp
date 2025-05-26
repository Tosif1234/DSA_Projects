#include <iostream>
using namespace std;

int Addition(int a, int b)
{
    return a + b;
}
int Subtraction(int a, int b)
{
    return a - b;
}
int Multiplication(int a, int b)
{
    return a * b;
}
int Division(int a, int b)
{
    if (b != 0)
    {
        return a / b;
    }
    else
    {
        cout << "Error: Division by zero!" << endl;
        return 0;
    }
}
int Modulus(int a, int b)
{
    if (b != 0)
    {
        return a % b;
    }
    else
    {
        cout << "Error: Division by zero!" << endl;
        return 0;
    }
}

int main()
{

    int choice, a, b;

    do
    {
        cout << endl << "==== Calculator menu =====" << endl;
        cout << "Press 1 for +" << endl;
        cout << "Press 2 for -" << endl;
        cout << "Press 3 for *" << endl;
        cout << "Press 4 for /" << endl;
        cout << "Press 5 for %" << endl;
        cout << "Press 0 for Exit" << endl;
        cout << endl;

        cout << "Enter your choice: ";
        cin >> choice;
        if (choice == 0)
        {
            cout << "Exiting the calculator." << endl;
            return 0;
        }
        else if (choice >= 1 && choice <= 5)
        {
            cout << "Enter the First number: ";
            cin >> a;
            cout << "Enter the second number: ";
            cin >> b;
        }
        else{
            cout << "Invalid choice, please try again." << endl;
        }

        

        switch (choice)
        {

        case 1:
            cout << "Addition of " << a << " and " << b << " is " << Addition(a, b) << endl;
            break;

        case 2:
            cout << "Subtraction of " << a << " and " << b << " is " << Subtraction(a, b) << endl;
            break;

        case 3:
            cout << "Multiplication of " << a << " and " << b << " is " << Multiplication(a, b) << endl;
            break;

        case 4:
            if (b != 0){
                cout << "Divide of " << a << " and " << b << " is " << Division(a, b) << endl;
            }
            else{
                Division(a, b);
            }   
            break;

        case 5:
            if (b != 0){
                cout << "Modulus of " << a << " and " << b << " is " << Modulus(a, b) << endl;
            }
            else{
                Modulus(a, b);
            }
            break;
        }
    } while (choice);
    return 0;
}