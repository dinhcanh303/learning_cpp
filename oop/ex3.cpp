#include <bits/stdc++.h>

using namespace std;

class Employee {
    private:
        string id;
        string name;
        string sex;
        string birthday;
        string address;
        string mst;
        string dayKhd;
    public:
        Employee(){
        }
        Employee(string id,
        string name,
        string sex,
        string birthday,
        string address,
        string mst,
        string dayKhd){
            this->name = name;
            this->sex = sex;
            this->birthday = birthday;
            this->address = address;
            this->mst = mst;
            this->dayKhd = dayKhd;
        }
        void input(){
            id = "00001";
            getline(cin,this->name);
            getline(cin,this->sex);
            getline(cin,this->birthday);
            getline(cin,this->address);
            getline(cin,this->mst);
            getline(cin,this->dayKhd);
        }
        void print(){
            cout << id << " " <<name << " " << birthday << " "<< address << " " << mst << " " << dayKhd << endl;
        }
};
int main(){
    Employee e;
    e.input();
    e.print();
    return 0;
}