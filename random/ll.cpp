#include <iostream>

using namespace std;

struct Node {
    int data {};
    struct Node *next;
} *first = NULL,*last;

void create(int A[], int n) {
    struct Node *t;
    first = new Node;
    first->data = A[0];
    first->next = NULL;
    last = first;

    for (int i = 1; i < n; i++) {
        t = new Node;
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void display(struct Node *p) {
    while (p != NULL) {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}

int Add(struct Node *p) {
    int sum {};

    while (p) {
        sum += p->data;
        p = p->next;
    }
    return sum;
}

int Max(struct Node *p) {
    int max = INT_MIN;
    while (p) {
        if (p->data > max) {
            max = p->data;
        }
        p = p->next;
    }
    return max;
}

struct Node* search(struct Node *p, int key) {
    while (p) {
        if (p->data == key) {
            return p;
        }
        p = p->next;
    }
    return NULL;
}

void insert(int value, int index) {
    struct Node *t = new Node;
    struct Node *p = first;
    
    t->data = value;
    t->next = NULL;

    if (index == 0) {
        t->next = first;
        first = t;
    } else {
        for (int i = 0; i < index - 1 && p != NULL; i++) {
            p = p->next;
        }

        if (p != NULL) {
            t->next = p->next;
            p->next = t;
        }
    }
}

void sortInsert(int value){
    struct Node *t,*p,*q;
    p=first;
    q = NULL;
    t = new Node;
    t->data = value ;
    t->next = NULL;
    while(p && value > p->data){
        q=p;
        p = p->next;
    }
    t->next=q->next;
    q->next=t;
    
}

int Delete(int index){
    struct Node *p,*q;
    int x = -1;
    if(index == 1){
        x = first->data;
        p = first;
        first = first->next;
        delete p;
    }
    else{
        p = first;
        q = NULL;

        for(int i{} ; i < index-1 && p ; i++){
            q = p;
            p = p->next;
        }
        if(p){
        q->next=p->next;
        x = p->data;
        delete p;
        }
    }
    return x;
}

string isSort(struct Node *p){
    int x = INT_MIN;

    while(p){
        if(p->data < x){
            return "not sorted!";
        }
        x = p->data;
        p=p->next;
    }
    return "sorted!";
}

void reverse(struct Node *p,int n){
    struct Node *q = p;
    int A[n];
    for(int i {} ; i < n ; i++){
        A[i] = p->data;
        p=p->next;
    }
    p=q;
    for(int i {n-1} ; i >=0 ; i--){
        p->data = A[i];
        p=p->next;
    }

}

int main() {
    int A[5] = {1, 3, 5, 7, 9};
    create(A, 5);

    sortInsert(6);
    Delete(2);
    display(first);
    cout << isSort(first) << "\n";
    reverse(first,5);
    display(first);
    // insert(6, 3);  // Insert 6 at index 3
    // display(first);

    // insert(10, 0); // Insert 10 at index 0
    // display(first);

    // insert(15, 10); // Insert 15 at index greater than list length, should not insert
    // display(first);

    // Uncomment to check sum and max functionality
    // cout <<"\nSum: " << Add(first);
    // cout <<"\nMax: " << Max(first);
    // struct Node *result = search(first, 7);
    // if (result) {
    //     cout << "\nFound: " << result->data;
    // } else {
    //     cout << "\nNot found";
    // }

    return 0;
}
