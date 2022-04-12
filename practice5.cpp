#include<iostream>
using namespace std;

class MyClass{
    public:
    void myMethod();
    };
void MyClass:: myMethod(){
    cout<<"Welcome to C++ Member Function";
    }

int main(){
    MyClass myObject;
     myObject.myMethod();
      return 0;
}
