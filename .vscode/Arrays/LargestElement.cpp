#include<bits/stdc++.h>
using namespace std ;
class sd{
    public:
    static int FindLargest(vector<int>&arr){
        int max_Ele=arr[0];
        for(int i=0;i<arr.size();i++){
            max_Ele=max(max_Ele,arr[i]);
        }
        return max_Ele;
    }

};
int main(){
    int n;
    cout<<"Enter the value of n";
    cin>>n;
    vector<int> ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }
    cout<<"Maximum element in the array is :"<<sd::FindLargest(ans);
    return 0;

}
