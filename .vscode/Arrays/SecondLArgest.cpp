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
    int max_ele=arr[0];
    int sec_max=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>max_ele){
            sec_max=max_ele;
            max_ele=arr[i];
            
        }
        else if(arr[i]<max_ele && arr[i]>sec_max){
            sec_max=arr[i];
        }
    }
    cout<<"Second max element in the array is "<<sec_max<<endl;
    return 0;
}