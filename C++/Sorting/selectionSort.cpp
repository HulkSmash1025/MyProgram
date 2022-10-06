#include<iostream>
#include<vector>
using namespace std;


void sSort(vector<int>& arr, int n)
{
   if(n==0||n==1)
    return ;

    int max= 0;
    for(int i=0;i<n;i++)
    {
        if(arr[max]<=arr[i])
        max=i;
    }
    swap(arr[max],arr[n-1]);
    sSort(arr,n-1);

}


int main(){

    vector<int> arr{8,7,4,6,9};
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    sSort(arr,arr.size());
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
}