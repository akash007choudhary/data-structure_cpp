#include<iostream>
#include<vector>
using namespace std;


    vector<int> count_NGE(vector<int> &arr, vector<int> &indices,vector<int>& ans) {

        for(int i=0;i<indices.size();i++){
            int count=0;
            int idx=indices[i];
            for(int j =idx+1;j<=arr.size()-1;j++){
                if(arr[j]>arr[idx]){
                    count++;
                }
            }
            ans[i]=count;
        }
        return ans;
    }
int main (){
    vector<int> arr= {1, 2, 3, 4, 1};
    vector<int>indices={0, 3};
    vector<int>ans(indices.size(),0);
    count_NGE(arr,indices,ans);
    for(int i = 0 ; i< ans.size();i++){
        cout<<ans[i]<<endl;
    }
    return 0 ;
}