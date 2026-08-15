#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cout<<"Enter the value of n:";
cin>>n;
vector<int> arr(n);
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int target;
cout<<"Enter target value";
cin>>target;
int s=0;
int e=n-1;
bool flag=1;
while(s<=e){
int mid=s+(e-s)/2;

if( arr[mid]==target){
    cout<<"Element found at index :"<<mid;
    flag=0;
    break;
}
else if(arr[mid]>=arr[s] && (arr[mid]>=target && target>=arr[s])){
    e=mid-1;
}
else{
    s=mid+1;
}

}
if(flag){
    cout<<"Element not found at any index of arr";
}
return 0;
}
