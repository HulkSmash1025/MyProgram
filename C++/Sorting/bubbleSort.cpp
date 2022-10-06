#include<iostream>
#include<vector>
using namespace std;


void bSort(vector<int>& arr, int n)
{
   if(n==0||n==1)
    return ;

    for(int i=0;i<n;i++)
    {
        if(arr[i]>arr[i+1])
        swap(arr[i],arr[i+1]);
    }
    bSort(arr,n-1);

}


int main(){

    vector<int> arr{8,7,4,6,9};
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    bSort(arr,arr.size());
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
}