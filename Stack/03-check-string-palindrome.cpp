#include <iostream>
#include <string.h>
#define MAX 20

using namespace std;

class Stack {
public:
    char item[MAX];
    int top;

    void create(Stack *p);
    void push(Stack *p, char item);
    char pop(Stack *p);
};

void Stack::create(Stack *p) {
    p->top = -1;
}

void Stack::push(Stack *p, char item) {
    if (p->top == MAX - 1) {
        cout << "\nStack Overflow..!";
    } else {
        ++p->top;
        p->item[p->top] = item;
    }
}

char Stack::pop(Stack *p) {
    if (p->top == -1) {
        cout << "\nStack Underflow..!";
        return '\0';
    } else {
        return p->item[p->top--];
    }
}

int main() {
    Stack stackObj;
    Stack *p = &stackObj;

    stackObj.create(p);

    char str[MAX], rev[MAX];
    int i = 0, j = 0;

    cout << "\nEnter any string: ";
    cin >> str;

    // Push characters of the string onto the stack
    while (str[i] != '\0') {
        stackObj.push(p, str[i]);
        i++;
    }

    // Pop characters from the stack to form the reversed string
    while (p->top != -1) {
        rev[j++] = stackObj.pop(p);
    }

    rev[j] = '\0'; // Null-terminate the reversed string

    // Output the original and reversed strings
    cout << "\nOriginal string: " << str;
    cout << "\nReversed string: " << rev;

    // Check if the original string is a palindrome
    if (strcmp(str, rev) == 0) {
        cout << "\nThe string is a Palindrome..!";
    } else {
        cout << "\nThe string is NOT a Palindrome.";
    }

    return 0;
}
