#include<iostream>
int sum(int n){
if(n==1)
    return 1;
else
    return n+sum(n-2);


}
int main(){
int n;
for(int i=1;i<=n;i=i+2){
    cout<<sum(i);
}
return 0;

}
