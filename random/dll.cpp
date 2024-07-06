#include <iostream>

using namespace std;

struct Node{
    Node *prev;
    int data;
    Node *next;
}*first = NULL;

void create(int A[] , int n){
    struct Node *t,*last;

    first = new Node;
    first->prev = NULL;
    first->data = A[0];
    first->next = NULL;
    last = first;

    for(int i{1} ; i < n ; i++){
        t = new Node;
        t->data = A[i];
        t->next = last->next;
        t->prev = last;
        last->next = t;
        last = t;
    }
}

void insert(int index , int value){
    struct Node *p,*t;
    t = new Node;
    t->data = value;
    p = first;
    
    if(index == 0){
        t->prev = NULL;
        t->next = first;
        first->prev = t;
        first = t;
    }
    else{
        for(int i {0} ; i < index - 1 ; i++){
            p=p->next;
        }
        t->next = p->next;
        t->prev = p;
        if(p->next){
            p->next->prev = t;
        }
        p->next = t;
    }
}



int main(){
    return 0;
}