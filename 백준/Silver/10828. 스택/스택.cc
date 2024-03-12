#include <iostream>
using namespace std;

class Node{
private:
    int elem;
    Node* next;
    friend class Stack;
};

class Stack{
public:
    Stack();
    void sPush(int);
    void sPop();
    void sSize();
    bool sEmpty();
    void sTop();
private:
    Node* tail;
    Node* head;
};

int main() {
    int cycle{0};
    cin >> cycle;
    Stack sn = Stack();

    while(cycle > 0) {
        string plag;
        cin >> plag;

        if(plag == "push") {
            int num{0};
            cin >> num;
            sn.sPush(num);
        } else if(plag=="pop") {
            sn.sPop();
        } else if(plag=="size") {
            sn.sSize();
        } else if(plag=="empty") {
            if(sn.sEmpty()) {
                cout << 1 << endl;
            } else {
                cout << 0 << endl;
            }
        } else if(plag=="top") {
            sn.sTop();
        }
        cycle--;
    }
}

Stack::Stack() {
    head = NULL;
    tail = NULL;
}

void Stack::sPush(int num) {
    Node* new_node = new Node;
    new_node->elem = num;
    new_node->next = NULL;
    if(sEmpty()) {
        head = new_node;
        tail = new_node;
    } else {
        new_node->next = head;
        head = new_node;
    }
}

void Stack::sPop(){
    if(sEmpty()) {
        cout << "-1" << endl;
    } else {
        Node* pop_node = head;
        head = head->next;
        if(head == NULL) {
            tail = NULL;
        } 
        cout << pop_node->elem << endl;
        free(pop_node);
    }
    
}

void Stack::sSize() { 
    int count{0};
    if (sEmpty()) {
        cout << count << endl;
    } else {
        Node* cur_node = NULL;
    
        cur_node = head;
        while(cur_node->next != NULL) {
            ++count;
            cur_node = cur_node->next;
        }
        cout << ++count << endl;
    }
    
}

bool Stack::sEmpty() {
    return (head == NULL) && (tail == NULL);
}

void Stack::sTop() {
    if(sEmpty()) {
        cout << "-1" << endl;
    } else {cout << head->elem << endl;}
}