#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED
using namespace std;
typedef char infotype;
#define Top(s) s.Top
#define info(s) s.info

struct stack {
  infotype info[15];
  int Top;
};

void createStack_103012300339(stack &s);
bool isEmpty_103012300339(stack s);
bool isFull_103012300339(stack s);
void push_103012300339(stack &s, infotype x);
int pop_103012300339(stack &s);
void printInfo_103012300339(stack s);

#endif // STACK_H_INCLUDED
