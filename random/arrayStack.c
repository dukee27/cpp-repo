#include <stdio.h>
#include <stdlib.h>

struct Stack{
    int size;
    int top;
    int *S;
};

void create(struct Stack *st){
    printf("enter size");
    scanf("%d",st->size);
    st->top = -1;
    st->S = (int*)malloc(st->size*sizeof(int));
}

void display(struct Stack st){
    for(int i = st.top ; i >= 0 ; i--){
        printf("%d" , st.S[i]);
    }
    printf("\n");
}

int push(struct Stack *st , int x){
    if(st->top == st->size -1){
        printf("overflow!");

    }
    else{
        st->top++;
        st->S[st->top] = x;
    }
}

int pull(struct Stack *st){
    int x = -1;

    if(st->top == -1){
        printf("underflowed");
    }

    else{
        x = st->S[st->top--];
    }
    return x;
}

int peek(struct Stack st, int index){
    int x=-1;
    if(st.top-index+1<0)
        printf("Invalid Index");
    x = st.S(st.top-index)
}