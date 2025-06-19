#include <iostream>
#include <vector>
using namespace std;

template <typename T1, typename T2>
class MemoryCalculator
{
private:
    T1 id;
    T2 name;

public:
    MemoryCalculator()
    {
        cout << "Enter Student ID : ";
        cin >> id;
        cout << "Enter Student Name : ";
        cin >> name;
    }

    void showDetails() const
    {

        cout << "Student ID : " << id << endl;
        cout << "Student Name : " << name << endl;
    }

    int getId()
    {
        return id;
    }
};

int main()
{

    vector<MemoryCalculator<int, string>> students;
    int choice;

    do
    {
        cout << endl
             << "==== Student Managment System ====" << endl;
        cout << "1. Add Student to list.." << endl;
        cout << "2. Dispaly the list of Students.." << endl;
        cout << "3. Remove a Student from the list by ID .." << endl;
        cout << "4. Search for a Student by ID.." << endl;
        cout << "0. Exit.." << endl;

        cout << "Enter Your Coice : ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            MemoryCalculator<int, string> newStudent;
            students.push_back(newStudent);
            break;
        }
        case 2:
        {

            cout << "=== Studet Deatils ===" << endl;
            if (students.empty())
            {
                cout << "No Students In Lsit .." << endl;
            }
            else
            {
                for (int i = 0; i < students.size(); i++)
                {
                    cout << endl
                         << "Student [" << i << "]" << endl;
                    students[i].showDetails();
                }
            }
            break;
        }

        case 3:
        {
            int deleteId;

            cout << "Enter The Student Id For Remove : ";
            cin >> deleteId;
            int i;
            for (i = 0; i < students.size(); i++)
            {
                if (students[i].getId() == deleteId)
                {
                    students.erase(students.begin() + i);
                    cout << "Student with ID " << deleteId << " removed." << endl;
                    break;
                }
                else if (i == students.size())
                {
                cout << "Student with ID " << deleteId << " not found." << endl;
                }
            }
            
            break;
        }
        case 4:
        {
            int matchedId;

            cout << "Enter The Student Id For Search : ";
            cin >> matchedId;
            int i;
            for (i = 0; i < students.size(); i++)
            {
                if (students[i].getId() == matchedId)
                {
                    cout << endl
                         << "Student with ID " << matchedId << " Found.";
                    cout << endl
                         << "Student [" << i << "]" << endl;
                    students[i].showDetails();
                    break;
                }
            }
            if (i == students.size())
            {
                cout << "Student with ID " << matchedId << " not found." << endl;
            }
            break;
        }
        
        case 0:
        {
            cout << "Thank you for using Student Management System.." << endl;
            break;
        }

        default:
            cout << "Invalid Choice! Please try again.." << endl;

            break;
        }

    } while (choice != 0);

    return 0;
}