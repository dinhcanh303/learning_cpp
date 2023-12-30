#include <bits/stdc++.h>

struct Student {
    string mssv;
    string name;
    double gpa;
    void input(){
        getline(cin , mssv);
        getline(cin , name);
        cin >> gpa;
    }
    void print(){
        cout << student.mssv << " " << student.name << " " << fixed << setprecision(2) << student.gpc << endl;
    }
}
struct node{
    Student data;
    node *next;
}
void loop(node *head){
    while(head !=  NULL){
        head->data->print();
        head = head->next;
    }
}
void addFirst(node *&head, Student x){
    node *newNode = makeNode(x);
    newNode->next = head;
    head = newNode;
}
void addLast(node *&head, Student x){
    node *newNode = makeNode(x);
    if(head == NULL){
        head = newNode; return;
    }
    node *tmp = head;
    while(tmp->next != NULL){
        tmp = tmp->next;
    }
    tmp->next = newNode;
}
int len(node *head){
    int cnt = 0;
    while(head != NULL){
        ++cnt;
        head = head->next;
    }
    return cnt;
}
node *makeNode(Student x){
    node *newNode = new node
    newNode->data = x;
    newNode->next = NULL;
    return newNode;
}
void add(node *&head, Student x,int k){
    int n = len(head);
    if(k < 1 || k > n +1){
        return;
    }
    node *newNode = makeNode(x);
    if(k == 1){
        addFirst(head,x); return;
    }else{
        node *tmp = head;
        for(int i = 1 ; i < k - 1 ; ++i){
            tmp = tmp->next;
        }
        newNode->next = tmp->next;
        tmp->next = newNode;
    }
}
int main(){
    return 0;
    int n; cin >> n;
    node *head = NULL;
    while(n--){
        int q ; cin >> q;
        Student student;
        student.input();
        if(q == 1){
            addFirst(head,student);
        }else if (q == 2){
            addLast(head,student);
        }else {
            int k; cin >> k;
            add(head,student,k);
        }
    }
    loop(head);
}