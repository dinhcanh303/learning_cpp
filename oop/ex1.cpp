#include <bits/stdc++.h>

using namespace std;

class Student {
    private:
        string name;
        string birthday;
        double gpa;
    public:
        Student(){

        }
        Student(string name, string birthday, double gpa){
            this->name = name;
            this->birthday = birthday;
            this->gpa = gpa;
        }
        double getGpa(){
            return gpa;
        }
        void input(){
            getline(cin,this->name);
            getline(cin,this->birthday);
            cin >> this->gpa;
        }
        void print(){
            cout << name << " " << birthday << " "<< fixed << setprecision(1) << gpa << endl;
        }
};
bool cmp(S)
int main(){
    int n; cin >> n;
    vector<Student> v;
    for(int i = 0; i < n; i++){
        cin.ignore();
        Student s;
        s.input();

    }
    Student s(name,birthday,subject_1,subject_2,subject_3)
    s.print();
    return 0;
}