#include<iostream>
using namespace std;

int main(){

    int size , i;
    int a[5];

    cout << "Enter the array's size : ";
    cin >> size;

    for ( i = 0; i < size; i++)
    {
        cout << "Enter the element of array : ";
        cin >> a[i];

    }
    cout << "Negative elements  from Array : ";
    for ( i = 0; i < size; i++)
    {
        if (a[i] < 0)
        {
            cout << a[i] << " ";
        }
    }

    

    
    
}