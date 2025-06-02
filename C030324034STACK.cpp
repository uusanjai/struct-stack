#include <iostream>
using namespace std;

const int MAX_SIZE = 5;

class Stack {
private:
    int data[MAX_SIZE];
    int top;

public:
    Stack() {
        top = -1; 
    }

    bool isFull() const {
        return top == MAX_SIZE - 1;
    }

    bool isEmpty() const {
        return top == -1;
    }

    void push(int value) {
        if (isFull()) {
            cout << "Stack sudah penuh, tidak bisa menambah " << value << "!" << endl;
        } else {
            data[++top] = value;
            cout << "Push: " << value << endl;
        }
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack kosong, tidak bisa pop!" << endl;
        } else {
            cout << "Pop: " << data[top--] << endl;
        }
    }

    void print() const {
        cout << "Isi stack: ";
        if (isEmpty()) {
            cout << "[kosong]";
        } else {
            for (int i = 0; i <= top; ++i) {
                cout << data[i] << " ";
            }
        }
        cout << endl;
    }
};

int main() {
    Stack s;

    s.print();
    s.push(30);
    s.push(10);
    s.push(30);
    s.push(40);
    s.push(70); 
    s.push(90); 
    s.print();

    s.pop();
    s.print();

    s.push(70);
    s.print();

    s.pop();
    s.pop();
    s.pop();
    s.pop(); 

    return 0;
}
