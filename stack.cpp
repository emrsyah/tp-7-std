#include "stack.h"
#include <iostream>

void createStack_103012300339(stack &s){
 Top(s) = 0;
}

bool isEmpty_103012300339(stack s){
  return Top(s) == 0;
}

bool isFull_103012300339(stack s){
  return Top(s) == 15;
}

void push_103012300339(stack &s, infotype x){
 if (!isFull_103012300339(s)) {
      Top(s) =  Top(s) + 1;
      info(s)[Top(s)] = x;
 }
}

int pop_103012300339(stack &s){
  infotype x = info(s)[Top(s)];
  Top(s) = Top(s) - 1;
  return x;
}
void printInfo_103012300339(stack s){
  for (int i = Top(s); i >= 1; i--){
    cout << info(s)[i] << " ";
  }
  cout << endl;
}
