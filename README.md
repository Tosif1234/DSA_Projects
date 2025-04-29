#  Pjoject 3 Circlet

## 📸 Sample Output Screenshot

Below is an actual run of the program in the terminal:

Output:

![Program Output](Circlet/images/output-1.png)

Input:33

![Program Output](Grade%20Calculator/images/F.png)




##  Our Code
```cpp
#include<iostream>
using namespace std;

int main(){
    
    int score;
    char grade;

    cout << "Enter Your Score :";
    cin >> score;

    if (score < 0 || score > 100)
    {
        cout << "Invalid Score" << endl;
        return 0;
    }
    
    
    grade=  (score>=80)? 'A':
            (score>=70)? 'B':
            (score>=60)? 'C':
            (score>=50)? 'D': 'F';

            
    cout << "Your Grade Is " << grade <<".";

    switch (grade)
    {
    case 'A':
        cout << " Excellent Work!";
        break;
    case 'B':
        cout << " Well Done";
        break;
    case 'C':
        cout << " Good Job";
        break;
    case 'D':
        cout << " You passed, but you could do better.";
        break;
    case 'F':
        cout << " Sorry Your Failed";
        break;
        
    
    default:
        cout << "Error" << endl;
        break;
    }

    if ( grade == 'A' || grade == 'B' || grade == 'C' || grade == 'D' )
    {
        cout << " You are eligible for the next level.";
    }
    else{
        cout << " Please try again next time.";
    }
    

    return 0;
}
```


