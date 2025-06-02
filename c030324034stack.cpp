#include <iostream>
#define MAXSTACK 4
using namespace std;

typedef int ItemType;

typedef struct {
    ItemType item[MAXSTACK];
    int count;
} Stack;

void InitializeStack(Stack* S) {
    S->count = 0;
    cout <<"stack telah diinisialiisasi.\n";
}
int full(Stack* S) {
    return S->count == MAXSTACK;
}
int empty(Stack* S) {
    return S->count == 0;
}

void push (ItemType x, Stack* s) {
    if (full(s)) {
        cout << "Stack penuh!! Tidak dapat menambahkan, harap ambil terlebih dahulu baru masukkan " << x << ".\n";
    } else {
        s->item[s->count] = x;
        s->count++;
        cout << "push: " << x << " berhasil dimasukkan.\n";
    }
}


void pop(Stack* S, ItemType* X) {
    if (empty(S)) {
        cout << "Stack kosong! Tidak dapat melakukan pop.\n";
    } else {
        S->count--;
        *X = S->item[S->count];
        cout << "Pop: " << *X << " berhasil diambil.\n";
    }
}


int main() {
    Stack nilai;
    ItemType x;
    InitializeStack(&nilai);

    push(20, &nilai);
    push(90, &nilai);
    push(10, &nilai);
    push(20, &nilai);

    pop(&nilai, &x);

    pop(&nilai, &x);

    push(30, &nilai);
    push(10, &nilai);
    push(50, &nilai);  

  
    pop(&nilai, &x);
    pop(&nilai, &x);
    pop(&nilai, &x);
    pop(&nilai, &x); 




    return 0;
}



