#include <bits/stdc++.h>

using namespace std;

class Student {
    private:
        string name;
        string birthday;
        double subject_1;
        double subject_2;
        double subject_3;
    public:
        Student(){

        }
        Student(string name, string birthday, double subject_1, double subject_2, double subject_3){
            this->name = name;
            this->birthday = birthday;
            this->subject_1 = subject_1;
            this->subject_2 = subject_2;
            this->subject_3 = subject_3;
        }
        double sumSubject(){
            return subject_1 + subject_2 + subject_3;
        }
        void print(){
            cout << name << " " << birthday << " "<< fixed << setprecision(1) << sumSubject();
        }
}
int main(){
    string name,birthday;
    getline(cin, name);
    getline(cin, birthday);
    double subject_1,subject_2,subject_3;
    cin >> subject_1 >> subject_2 >> subject_3;
    Student s(name,birthday,subject_1,subject_2,subject_3)
    s.print();
    return 0;
}