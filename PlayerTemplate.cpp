#include <iostream>
#include <string>
using namespace std;

template <typename T>
void Display(T a, T b){
    cout<<a<<endl;
    cout<<b<<endl;
}

int main(){
    Display(12,20);
    Display(45.6,75.4);
    Display("Hello","World");
}
