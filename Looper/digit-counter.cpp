#include<iostream>
using namespace std;


// 1. Enter The Numbers..
// 2. Check The in while loop..
// 3. Check if num > 0
// 4. Get The Last Digit using % operator (num % 10)
// 5. Add The Last Digit to sum
// 6. Remove The Last Digit using / operator (num = num / 10)
// 7. Repeat The Loop until num > 0
// 8. Print The Sum of Digits
// 9. End

int main(){
    int num, sum = 0;
    int digit;

    cout << "Enter The Numbers : " ;
    cin >> num;

    while (num > 0)
    {
        digit = num % 10;
        sum = sum + digit;
        num = num / 10;
    }
    cout << "Your Numbers Sum is :" << sum << endl;
    return 0;

}