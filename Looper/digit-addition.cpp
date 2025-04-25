    #include<iostream>
    using namespace std;

    // 1. Enter A Number..
    // 2. Get The Last Digit using % operator (num % 10)
    // 3. Get The First Digit using while loop (num >= 10)
    // 4. Remove The Last Digit using / operator (num = num / 10)
    // 5. Repeat The Loop until num >= 10
    // 6. Print The Sum of First & Last Digit
    // 7. End

    int main(){
        int num,LastDigit,FirstDigit;
        int sum=0;

        cout << "Enter A Number : " ;
        cin >> num;

        LastDigit= num % 10;
        
        FirstDigit= num;

        while (FirstDigit >= 10)
        {   
            FirstDigit = FirstDigit / 10;
        }
        sum = FirstDigit + LastDigit;

        cout << "Sum of First Digit " << FirstDigit << " & Last digit " << LastDigit << " is: "<< sum << endl;
        return 0;
    }