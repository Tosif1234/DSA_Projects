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
    cout << "The Transpose Mastrix is : " << endl;
    for ( j = 0; j < row; j++)
    {
        for ( i = 0; i < column; i++)
        {
            cout << a[i][j] << " " ;
            
        }
        cout << endl;
    }
    

    

    
    
}