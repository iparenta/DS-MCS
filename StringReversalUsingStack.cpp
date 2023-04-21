#include <iostream>
#include <string.h>
#include <stack> // stack from stadnard template library(STL)
using namespace std;

class Stack{
private: 
    char A[101];
    int top;
public: 
    void Push(int x);
    void Pop();
    int Top();
    bool IsEmpty();
};

void Reverse (char *C, int n){
    stack <char> S;
    //loop for push
    for(int i =0; i < n; i++){
        S.push(C[i]);
    };
    //loop for push
    for(int i = 0; i < n; i++){
        C[i] = S.top(); // overwrite the  character at index i
        S.pop(); // perform pop.
    };
};

int main(){
    char C[51];
    cout << "Enter a string: ";
    cin >> C;
    Reverse(C, strlen(C));
    printf("Output = %s", C);
};