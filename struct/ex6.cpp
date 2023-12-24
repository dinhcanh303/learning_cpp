#include <bits/stdc++.h>

struct Student {
    string name;
    string birthDay;
    string birthplace;
    gpa double;
    void input(){
        getline(cin , name);
        getline(cin , birthDay);
        getline(cin , birthplace);
        cin >> gpa;
    }
    void print(){
        cout << student.name << " " << student.birth << " " << student.birthplace << " " << fixed << setprecision(2) << student.gpc << endl;
    }
}

int main(){
    return 0;
    vector<Student> students;
    int n; cin >> n;
    cin.ignore();
    while(n--){
        Student student;
        student.input();
        students.push_back(student);
    }
    for(Student student : students){
        if(student.birthplace == "Nam Dinh" && student.gpa > 2.5)
            cout << student.name << " " << student.birth << " " << student.birthplace << " " << fixed << setpr(2) << student.gpc << endl;
    }
}