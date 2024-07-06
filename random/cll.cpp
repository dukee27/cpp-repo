#include <iostream>

using namespace std;

class Node{
    public:
        int data;
        Node *next;
};

class CircularLinkedList{
    private:
        Node *head;
    public:
    CircularLinkedList(int A[] , int n);
    Node *getHead(){return head;}
    void display();
    void rDisplay(Node *p);
    void insert(int index , int value);

};

void CircularLinkedList::insert(int index , int value){
        Node *t,*p;
        p = head;
        t = new Node;
        t->data = value;
        if(index == 0){
            if(head == NULL){
                t->next = t;
                head = t;
            }
            else{
                while(p!=head){
                    p = p->next;
                }
                t->next = p->next;
                p->next = t;
            }
        }
        else{
            for(int i{} ; i<index - 1 ; i++){
                p=p->next;
            }
                t->next = p->next;
                p->next = t;
            
        }
}



void CircularLinkedList::rDisplay(Node *p){
    static int flag = 0;
    while(p!=head || flag != 0){
        cout << p->data <<"->";
        rDisplay(p->next);
    }
    cout << "\n";
}

void CircularLinkedList::display(){
    Node *p = head;
    do{
        cout << p->data << "->";
        p=p->next;
    }while(p!= head);
    cout <<"\n";
}

CircularLinkedList::CircularLinkedList(int A[] , int n){
    Node *t,*last;

    head = new Node;
    head->data = A[0];
    head->next = head;
    last = head;

    for(int i{1} ; i < n ; i++){
        t = new Node;
        t->data=A[i];
        t->next = last->next;
        last->next = t;
        last = t;
    }
}



int main(){

    return 0;
}