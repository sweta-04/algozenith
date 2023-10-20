#include <iostream>
using namespace std;
int main(){
    
    int n;
    cout << "Enter the value of n"<<endl;
    cin >> n;
    if(n%2==0 && n%3==0){
        cout<<"Divisible by 2 & 3"<< endl;

    }
    else
        cout<<" Not divisible by 2 & 3"<< endl;
}