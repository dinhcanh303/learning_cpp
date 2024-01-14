#include <bits/stdc++.h>

using namespace std;
class Person {
    private:
        string name,birthday,address;
    public:
        Person(){
            this->name = "";
            this->birthday = "";
            this->address = "";
        }
        Person(string name, string birthday, string address){
            this->name = name;
            this->birthday = birthday;
            this->address = address;
        }
        void toString(){
            cout << name << " " << birthday << " " << address << " ";
        }
        void format(){
            stringstream ss(name);
            string nameTmp = "",tmp;
            while(ss >> tmp){
                nameTmp += toupper(tmp[0]);
                int size = tmp.size();
                for(int i = 1; i < size; i++){
                    nameTmp += tolower(tmp[i]);
                }
                nameTmp += " ";
            }
            nameTmp.pop_back();
            name = nameTmp;
            if(birthday[1] == '/') birthday = "0" + birthday;
            if(birthday[4] == '/') birthday.insert(3,"0");
        }
        string getSortName(){
            return name;
        }
};
class Student : public Person {
    private:
        string mssv;
        double gpa;
        string className;
    public:
        Student(){

        }
        Student(string mssv,string name,string birthday, string address,string className,double gpa) : Person(name,birthday,address){
            this->mssv = mssv;
            this->className = className;
            this->gpa = gpa;
        }
    void toString(){
        cout << mssv << " ";
        Person::toString();
        cout << className << " " << fixed << setprecision(2) <<gpa << endl;
    }
};
bool cmp(Student a, Student b){
    return a.getSortName() < b.getSortName();
}
int main(){
    int n; cin >> n;
    vector<Student> students;
    int cnt = 1;
    while(n--){
        cin.ignore();
        string name;
        string birthday;
        string address;
        string className;
        double gpa;
        getline(cin,name);
        getline(cin,birthday);
        getline(cin,address);
        getline(cin,className);
        cin >> gpa;
        string mssv = "";
        int t = 3;
        while(t--) mssv += "0";
        mssv += to_string(cnt);
        Student s(mssv,name,birthday,address,className,gpa);
        s.format();
        students.push_back(s);
        cnt++;
    }
    sort(students.begin(),students.end(),cmp);
    for(auto s : students){
        s.toString();
    }
    return 0;
}