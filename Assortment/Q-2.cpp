#include<iostream>
using namespace std;

int main(){

    int row, column , i ,j;
    int a[5][5];

    cout << "Enter the array's Row size : ";
    cin >> row;

    cout << "Enter the array's Column size : ";
    cin >> column;
    cout << "Enter array's elements : " << endl;
    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < column; j++)
        {
            cout << "a["<< i <<"]"<< "[" << j <<"]" <<" : ";
            cin >> a[i][j];
        }
    }

    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < column; j++)
        {
            if (a[i][j] > a[0][0])
            {
                a[0][0] = a[i][j];
            }
        }
    }
    cout << "largest elemnet in array is : " << a[0][0] << endl;

    

    
    
}