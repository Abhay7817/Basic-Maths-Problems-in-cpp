#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int countDigit(int n) {
int o=10;
int c=0;
int m;
while(n!=0){
    m=n%o;
    o=o*10;
    n=n-m;
    c++;
}
return c;
}

int countDigit1(int n){
n = (int)(log10(n)+1);
return n;
}

void extractDigit(int n){
while(n!=0){
    cout<<n%10<<endl;
    n=n/10;
}
}

int reverseNumber(int n) {
int num;
   while(n!=0){
    int k=n%10;
    n=n/10;
    num=(num*10)+k;
}
return num;
}

bool isPalindrome(int n) {
    int num; int t=n;
    while(n!=0){
        int k=n%10;
        n=n/10;
        num=(num*10)+k;
    }
    if(t==num){
        return true;
    }else{
        return false;
    }
}

int GCD(int n1,int n2) {
int hcf;
if(n1>n2){
    n1=n1+n2;
    n2=n1-n2;
    n1=n1-n2;
}
for(int i=1;i<=n1;i++){
    if(n1%i==0 && n2%i==0){
        hcf=i;
    }
}
return hcf;
}

bool isArmstrong(int n) {
int t=n; int k, sum=0;
int c=0;
while(n!=0){
    n=n/10;
    c++;
}
n=t;
while(n!=0){
k=n%10;
n=n/10;
sum=sum+pow(k,c);
}
if(t==sum){
        return true;
}else{
return false;
}
}

vector<int> divisors(int n) {
vector<int> v;
for(int i=1;i<=n;i++){
    if(n%i==0){
        v.push_back(i);
    }
}
for(int i=0;i<v.size();i++){
    cout<<v.at(i)<<" ";
}
return v;
}

bool isPrime(int n) {
    //your code goes here
bool var=true;
for(int i=2;i<n;i++){
    if(n%i==0)
        var = false;
}
return var;
}
int main(){
int n;
cout<<"Enter the number: ";
cin>>n;
//cout<<countDigit(n);
//cout<<countDigit1(n);
//extractDigit(n);
//cout<<reverseNumber(n);
//cout<<isPalindrome(n);
/*cout<<"Enter the numbers: ";
int m,j;
cin>>m>>j;
cout<<GCD(m,j);*/
//cout<<isArmstrong(n);
//divisors(n);
//cout<<isPrime(n);
return 0;
}
