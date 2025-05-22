#include<iostream>
using namespace std;

int main(){

    int row, column , i ,j;

    cout << "Enter the array's Row size : ";
    cin >> row;

    cout << "Enter the array's Column size : ";
    cin >> column;

    int a[row][column];

    cout << "Enter array's elements : " << endl;
    for ( i = 0; i < row; i++)
    {
        for ( j = 0; j < column; j++)
        {
            cout << "a["<< i <<"]"<< "[" << j <<"]" <<" : ";
            cin >> a[i][j];
        }
    }
    cout << "**************"<< endl;
    int row_num;

    cout << "Eneter Row Number :" ;
    cin >> row_num;

    cout<< "Elements Of The Row : ";
    for ( j = 0; j < column; j++)
    {
        cout << a[row_num][j] << " ";
    }
    cout << endl;

    int row_sum = 0;

    for ( j = 0; j < column; j++)
    {
        row_sum += a[row_num][j];
    }
    cout << "The sum of row " << row_num << " : " << row_sum << endl;
    cout << endl;

    int col_num;

    cout << "Eneter Column Number :" ;
    cin >> col_num;

    cout<< "Elements Of The Column : ";
    for (i = 0; i < row; i++) 
    {
        cout << a[i][col_num] << " ";
    }
    cout << endl;

    int col_sum = 0;

    for ( i = 0; i < row; i++)
    {
        col_sum += a[i][col_num];
    }
    cout << "The sum of column " << col_num << " : " << col_sum << endl;
    return 0;
    
}