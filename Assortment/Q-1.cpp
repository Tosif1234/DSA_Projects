#include<iostream>
using namespace std;

int main(){

    int size , i;

    cout << "Enter the array's size : ";
    cin >> size;

    int a[size];
    
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
