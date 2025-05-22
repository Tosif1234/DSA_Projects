#include<iostream>
using namespace std;

int main(){

    int size , i;
    int a[5];

    cout << "Enter the array's size : ";
    cin >> size;
    cout << "Enter array's Elements : " << endl;
    for ( i = 0; i < size; i++)
    {
        cout << "a["<< i <<"]" <<" : ";
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
    return 0;
}