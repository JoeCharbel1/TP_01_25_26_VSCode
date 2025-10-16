#include <iostream>
using namespace std;

int getInt(int intInf, int intSup)
{
    int n;
    bool bornSup;
    bool bornInf;
    do{
    cout<<"Enter an integer greater than "<< intInf <<" and less than"<< intSup <<" "<<endl;
    cin>>n;
    bornSup=n>=intSup;
    bornInf=n<=intInf;
    if(bornInf){
    cout<<"Your number is less than or equal to "<< bornInf<<endl;
    }
    if(bornSup) {
        cout<<"Your number is greater than or equal "<< bornSup<<endl;
    }
    }while(bornInf||bornSup);
    return n;
}
int main()
{
    cout<<"Enter the integer for which you want to display the multiplication table"<<endl;
    int n;
    n=getInt(0,70);
    int bornMultSup=getInt(8,30);
    int bornMultInf=getInt(0,8);
    for(int i=bornMultSup; i>=bornMultInf; i--){
        cout<<n<<"x"<<i<<"="<<n*i<<endl;
    }
    return 0;
}