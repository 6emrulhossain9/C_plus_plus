#include<iostream>
#include<cmath>
using namespace std;
int even_odd(int x){
    if (x%2==0){
        cout<<x<<" is an Even Number"<<endl;
    }else{
        cout<<x<<" is an Odd Number"<<endl;
    }
}
int main() {
    int number;
    cout<<"Enter an Integer:";
    cin>>number;
    even_odd(number);
    return 0;
}
