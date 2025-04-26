#  Grade Checker in C++

This C++ program takes a student's score as input, calculates the corresponding grade using a **ternary operator**, and displays a custom comment using a **switch statement**.

---

##  Features

- Validates score input (must be between 0 and 100)
- Calculates grade:
  - A: 80 and above
  - B: 70 - 79
  - C: 60 - 69
  - D: 50 - 59
  - F: Below 50
- Prints performance feedback using `switch-case`
-  Checks if you're eligible for the next level

---
## 📸 Sample Our Flowchart

Below is an actual run of the program in the terminal:

![Program Output](Grade-calc.png)

## 📸 Sample Output Screenshot

Below is an actual run of the program in the terminal:
Input:94

![Program Output](images/A.png)
Input:33
![Program Output](images/F.png)




##  Our Code

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


