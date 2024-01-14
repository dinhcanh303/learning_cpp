#include <bits/stdc++.h>

using namespace std;
class Vehicle {
    private:
        string id,name,manufacturer,color;
        int price;
    public:
        Vehicle(){

        }
        Vehicle(string id, string name, string manufacturer,string color,int price){
            this->id = id;
            this->name = name;
            this->manufacturer = manufacturer;
            this->color = color;
            this->price = price;
        }
        string getManufacturer() { 
            return this->manufacturer; 
        }
        int getPrice() { return this->price;}
        void print(){
            cout << id << " " << name << " " << manufacturer << " " << color << " ";
        }

};
class Motorbike : public Vehicle {
    private:
        int speed;
    public:
        Motorbike(){

        }
        Motorbike(string id, string name, string manufacturer,string color,int price,int speed) : Vehicle(id,name,manufacturer,color,price){
            this->speed = speed;
        }
        void print(){
            Vehicle::print();
            cout << speed << " " << Vehicle::getPrice() << endl;
        }
};
class Car : public Vehicle {
    private:
        int ml;
    public:
        Car(string id, string name, string manufacturer,string color,int price,int ml) : Vehicle(id,name,manufacturer,color,price){
                this->ml = ml;
        }
        void print(){
            Vehicle::print();
            cout << ml << " " << Vehicle::getPrice() << endl;
        }
};
int main(){
    int n; cin >> n;
    cin.ignore();
    vector<Motorbike> v1;
    vector<Car> v2;
    for(int i = 0 ; i < n; i++){
        string id,name,manufacturer,color;
        int price;
        if(id[0] == 'O'){
            getline(cin,id);
            getline(cin,name);
            getline(cin,manufacturer);
            getline(cin,color);
            cin >> price;
            int ml;
            cin >> ml;
            Car car = new Car(id,name,manufacturer,color,price,ml);
            v2.push_back(car);
        }else {
             getline(cin,id);
            getline(cin,name);
            getline(cin,manufacturer);
            getline(cin,color);
            cin >> price;
            int speed;
            cin >> speed;
            Motorbike moto = new Motorbike(id,name,manufacturer,color,price,speed);
            v1.push_back(moto);
        }
    }
    string hang;
    cin.ignore();
    cin >> hang;
    cout << "DANH SACH XE HANG " << hang << " :\n";
    for(Car c : v2){
        if(c.getManufacturer() == hang)
            c.print();
    }
    for(Motorbike m : v1){
        if(m.getManufacturer() == hang)
            m.print();
    }
    return 0;
}

