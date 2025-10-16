#include <iostream>
using namespace std;

#include <iostream>
using namespace std;
int main(){
    int n;
    do{
    cout<<"Enter a positive integer less than 70: "<<endl;
    cin>>n;
    }while (n<=0 || n>=70);
    for(int i=10; i>=0; i--)
    {
    cout<<n<<"x"<<i<<"="<<n*i<<endl;
    }
    return 0;
}