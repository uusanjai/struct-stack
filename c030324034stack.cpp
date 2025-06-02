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
int main() {
    Stack nilai;
    InitializeStack(&nilai);

    return 0;
}



