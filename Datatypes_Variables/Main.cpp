#include <iostream>
#include <fstream>
#include "Flex.h"
using namespace std;

int main()
{
    ifstream input("students.txt");
    ofstream output("report.txt");
    int totalstudents;
    input >> totalstudents;
    student *Students[totalstudents];

    int count = 0;
    string first_name, lastname, course;
    while (input >> course >> first_name >> lastname && count < totalstudents)
    {
        if (course == "English")
        {
            double a, p, m, f;
            input >> a >> p >> m >> f;
            Students[count++] = new english_students(first_name, lastname, a, p, m, f);
        }
        else if (course == "History")
        {
            double t, m, f;
            input >> t >> m >> f;
            Students[count++] = new history_students(first_name, lastname, t, m, f);
        }
        else if (course == "Math")
        {
            double q1, q2, q3, t1, t2, f;
            input >> q1 >> q2 >> q3 >> t1 >> t2 >> f;
            Students[count++] = new math_students(first_name, lastname, q1, q2, q3, t1, t2, f);
        }
    }
    cout << "*************The Students details are following*************" << endl;
    output << "*************The Students details are following*************" << endl;
    for (int i = 0; i < count; ++i)
    {
        Students[i]->print_Grade(cout);
        Students[i]->print_Grade(output);
        delete Students[i];
    }

    input.close();
    output.close();

    return 0;
}