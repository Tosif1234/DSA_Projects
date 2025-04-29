#include<iostream>
using namespace std;    

int main(){
    int i, j;

    for ( i = 1; i <= 5; i++)
    {
        if ( i ==1 || i == 3)
        {
            for ( j = 1; j <= 5; j++)
        {
            cout << "*" << " ";
        }
        }
        else if ( i == 2)
        {
            cout << "*       *";
        }
        else
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
    
}
