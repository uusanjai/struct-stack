#include <iostream>
#define MAXSTACK 4
using namespace std;

typedef int ItemType;

typedef struct {
    ItemType item[MAXSTACK];
    int count;
} Stack;

void initializeStack(Stack* S) {
    s->count = 0;
    cout <<"stack telah di inisialiisasi.\n";
}
int full(Stack* S) {
    return S->count == MAXSTACK;
}
int empty(Stack* S) {
    return S->count == 0;
}
void push (itemtype x, stack* s) {
    if (full(s))
    cout << "Stack penuh!! Tidak dapat menambahkan, harap ambil terlebih dahulu baru masukkan " << x << ".\n";
} else {
    s->item[s->count] - x;
    s->count++;
    cout << "push" << x << " berhasil dimasukkan.\n"
 }

int main() {
    Stack nilai;
    InitializeStack(&nilai);

    push(20, &nilai);
    push(90, &nilai);

    return 0;
}



