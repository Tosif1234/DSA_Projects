#include<iostream>
using namespace std;

// 1. start
// 2. Intialize variable ch with 'A'
// 2. start do while loop
// 3. print current character
// 4. increment ch by 4 (Skip 3 alphabets in Ato z "A,E,I,M,Q,U,Y")
// 5. check if ch is less than or equal to 'Z'
// 6. end do while loop
// 7. end

int main(){
    char ch='A';

    do 
    {
        cout << ch << ",";
        ch= ch + 4;
    }
    while (ch <= 'Z');
    return 0;
    
}