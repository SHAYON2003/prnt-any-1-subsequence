#include <iostream>
#include <vector>
using namespace std;

bool subsequence(int ind, int arr[],int sum,int s, vector<int> &ds, int n){
    // condition satisfied
     if(ind == n){
       if(s ==sum){
         for(auto it: ds) cout<<it<<" ";
         cout<<endl;
         return true;
       }
   else return false;
   }
  ds.push_back(arr[ind]);
   s+=arr[ind];
   if(subsequence(ind+1,arr, sum, s, ds, n)== true)
   return true;
   s-=arr[ind];
  ds.pop_back();
   if(subsequence(ind+1,arr,sum,s,ds,n)== true)
   return true;

    return false;
   }

int main() {
  int arr[] = {1,2,1};
  int n = 3;
  int sum = 2;
vector<int> ds;
  subsequence(0,arr,sum,0,ds,n);
  return 0;
}