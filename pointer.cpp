#include <iostream>
#include <string>
using namespace std;

int main() {

    string food = "Pizza";
    string *ptr = &food;

    cout<<ptr<<endl;
    cout<<&food<<endl;
    cout<<*ptr<<endl;

}
