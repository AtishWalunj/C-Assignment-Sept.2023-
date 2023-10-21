#include <iostream>
#include <string.h>
#include <iomanip>

using namespace std;

class Student{
public:
    char name[15];
    int age;
    int marks;
    int year;

    Student(char* n, int a, int m, int y)
    {
        strcpy(name, n);
        age = a;
        marks = m;
        year = y;
    }
};

int main()
{
    Student arr[4] = {
						Student("Manjushree", 29, 80, 2022), 
						Student("Vaishnavi", 28, 82, 2022), 
						Student("Yashika", 22, 85, 2023), 
						Student("Swara", 22, 89, 2021)
					};

    cout<< left << setw(14) << "Name";
    cout<< left << setw(10) << "Age";
    cout<< left << setw(9) << "Marks";
    cout<< left << setw(8) << "Year";
    cout<< endl;
    
    cout<<"______________________________________"<<endl<<endl;

    for (int i = 0; i < 4; i++)
    {
        cout<< left << setw(14) << arr[i].name;
        cout<< left << setw(10) << arr[i].age;
        cout<< left << setw(9) << arr[i].marks;
        cout<< left << setw(8) << arr[i].year;
        cout<< endl;
    }
    return 0;
}
