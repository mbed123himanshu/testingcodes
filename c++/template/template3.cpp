#include<iostream>
using namespace std;
template <class T,class U>
class A{
private:
T x;
U y;
public:
A(){
std::cout<<"Constructor Called \n";
}


};

int main()
{
A<char ,char>a;
A<int ,double>b;
return 0;



}
