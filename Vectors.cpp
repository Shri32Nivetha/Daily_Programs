#include <iostream>
#include <vector>
using namespace std;

void Display(vector<int>runs){
    cout<<"The elements of the vector is"<<endl;
    for (int i=0;i<runs.size();i++){
        cout<<runs.at(i);
        cout<<"\n";
    }
}
void Push(vector<int> &Runs){
    int add;
    cout<<"Enter the Runs to be added"<<endl;
    cin>>add;
    Runs.push_back(add);
}

void Last(vector<int> Runs){
    cout<<"The last element is"<<endl;
    cout<<Runs[Runs.size()-1]<<endl;
}

void Pop(vector<int>&pop){
    pop.pop_back();
}

void Insert(vector<int>&insert){
    int a,b;
    cout<<"Enter the position"<<endl;
    cin>>a;
    cout<<"Enter the element"<<endl;
    cin>>b;
    insert.insert(insert.begin()+a,b);
}
void Back(vector<int>back){
    cout<<"The last element in the vector is"<<endl;
    cout<<back.back()<<endl;
}

void Front(vector<int>front){
    cout<<"The first element in the vector is"<<endl;
    cout<<front.front()<<endl;
}

int main(){
    vector<int>Runs={100,200,300};
    Display(Runs);
    Push(Runs);
    Display(Runs);
    Last(Runs);
    Pop(Runs);
    Display(Runs);
    Insert(Runs);
    Display(Runs);
    Back(Runs);
    Front(Runs);
}