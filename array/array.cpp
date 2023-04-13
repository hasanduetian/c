#include<iostream>
using namespace std;
int main(){
int i, n,a[5],min,max;
cout<<"enter the number"<<endl;
cin>>n;
for(i=0;i<n;i++)
    cin>>a[i];
    min=a[0];
       max=a[0];
    for(i=1;i<n;i++){
        if(min>a[i])
            min=a[i];
        else if(max<a[i])
            max=a[i];
    }
    cout<<"the minimum number is "<<min<<endl;
   cout<<"the maximam number is "<<max<<endl;
}
