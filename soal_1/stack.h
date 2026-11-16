//stack.h (UNGUIDED)
#ifndef STACK_H
#define STACK_H

typedef int infotype;

struct Stack {
    infotype info[20];
    int top;
};

// Prototype fungsi
void createStack(Stack &S);

void push(Stack &S, infotype X);

infotype pop(Stack &S);

void printInfo(Stack S);

void balikStack(Stack &S);

// Latihan 2
void pushAscending(Stack &S, infotype X);

// Latihan 3
void getInputStream(Stack &S);

#endif
