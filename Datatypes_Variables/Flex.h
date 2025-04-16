#ifndef Flex_h
#define Flex_h
#include <iostream>
using namespace std;

class student
{
private:
    string first_name, last_name, course_name;

public:
    student(string, string, string);
    ~student();
    virtual double final_marks() = 0;
    void print_Grade(ostream &report);
};

class english_students : public student
{
private:
    double m_attendance, m_project, m_midterm, m_final;

public:
    english_students(string, string, double, double, double, double);
    ~english_students();
    double final_marks() override;
};

class history_students : public student
{
private:
    double h_term, h_midterm, h_final;

public:
    history_students(string, string, double, double, double);
    ~history_students();
    double final_marks() override;
};

class math_students : public student
{
private:
    double quiz1, quiz2, quiz3, test1, test2, mm_final;

public:
    math_students(string, string, double, double, double, double, double, double);
    ~math_students();
    double final_marks() override;
};


student::student(string fn, string ln, string cor)
{
    first_name = fn;
    last_name = ln;
    course_name = cor;
}
void student::print_Grade(ostream &report)
{
    report << "============================================================" << endl;
    report << first_name << " " << last_name << " " << course_name << " Final score is : " << final_marks() << endl;
    if (final_marks() <= 100 && final_marks() >= 85)
    {
        report << "The Grade is : A" << endl;
    }
    else if (final_marks() < 85 && final_marks() >= 75)
    {
        report << "The Grade is : B" << endl;
    }
    else if (final_marks() < 75 && final_marks() >= 65)
    {
        report << "The Grade is : C" << endl;
    }
    else if (final_marks() < 65 && final_marks() >= 55)
    {
        report << "The Grade is : D" << endl;
    }
    else
        report << "The Grade is : F" << endl;
}
student::~student() {}
double student::final_marks()
{
    return 0.0;
}

english_students::english_students(string fn, string ln, double ma, double mp, double mm, double mf) : student(fn, ln, "English")
{
    m_attendance = ma;
    m_project = mp;
    m_midterm = mm;
    m_final = mf;
}

double english_students::final_marks()
{
    return m_attendance * 0.10 + m_project * 0.30 + m_midterm * 0.30 + m_final * 0.30;
}
english_students::~english_students() {}
history_students::history_students(string fn, string ln, double hp, double hm, double hf) : student(fn, ln, "History")
{
    h_term = hp;
    h_midterm = hm;
    h_final = hf;
}

double history_students::final_marks()
{
    return h_term * 0.25 + h_midterm * 0.25 + h_final * 0.40;
}

history_students::~history_students() {}
math_students::math_students(string fn, string ln, double mq1, double mq2, double mq3, double mt1, double mt2, double mmf) : student(fn, ln, "Math")
{
    quiz1 = mq1;
    quiz2 = mq2;
    quiz3 = mq3;
    test1 = mt1;
    test2 = mt2;
    mm_final = mmf;
}

double math_students::final_marks()
{

    double quizAvg = (quiz1 + quiz2 + quiz3) / 3.0;
    return quizAvg * 0.10 + test1 * 0.25 + test2 * 0.25 + mm_final * 0.40;
}
math_students::~math_students() {}
#endif
