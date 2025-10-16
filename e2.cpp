#include <iostream>
using namespace std;

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a positive integer:"<<endl;
    cin>>n;
    for(int i=10; i>=0; i--){
    cout<<n<<"x"<<i<<"="<<n*i<<endl;
    }
    return 0;
}