#include<iostream>
using namespace std;

    // 1. Enter Your Score..
    // 2. If Score < 0 or Score > 100 Then Invalid Score
    // 3. Check The Grade using Ternary Operator
    // 4. if (score>=80) Then Garde Is A
    //       (score>=70) Then Garde Is B
    //       (score>=60) Then Garde Is C
    //       (score>=50) Then Garde Is D
    //       (score>=40) Then Garde Is F
    // 5. Additional Comments using switch case
    //      "A" Then Excellent Work!
    //      "B" Then Well Done 
    //      "C" Then Good Job
    //      "D" Then You passed, but you could do better.
    //      "F" Then Sorry Your Failed
    // 6.Check Eligibility
    //      if grade 'A','B','C','D' Then You are eligible for the next level
    //      else Please try again next time.

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