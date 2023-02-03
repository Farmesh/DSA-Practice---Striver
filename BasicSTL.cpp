#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
    //Sort
    int arr[] = {4,2,1};

    sort(arr, arr+3);
    
    cout<<arr[0]<<" "<<arr[1]<<" "<<arr[2];

    //min

      vector<int>v {4,2,5,9,1};
    cout<<"The elements in the vector are: ";
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
    cout<<"The minimum element is: "<<*min_element(v.begin(),v.end());

    //Max-element

        vector<int>v1{4,2,5,9,1};
    cout<<"The elements in the vector are: ";
    for(int i=0;i<v1.size();i++)
    {
        cout<<v1[i]<<" ";
    }
    cout<<endl;
    
    cout<<"The maximum element is: "<<*max_element(v1.begin(),v1.end());
cout<<endl;

// __builtin_popcount --int
       int n1 = 7;
    
    cout<<__builtin_popcount(n1);
cout<<endl;
    // __builtin_popcount -- Long long 
      
    long long n = 77777777777777;
    
    cout<<__builtin_popcountll(n);
cout<<endl;
    //next-permutation  //Array
      int arr1[] = {1,3,2};
    
    next_permutation(arr1,arr1+3);//using in-built function of C++
    cout<<arr1[0]<<" "<<arr1[1]<<" "<<arr1[2];
    cout<<endl;

    //next-permutation  //vector
    
       vector<int> vec = {1,3,2};
    
    next_permutation(vec.begin(), vec.end());
    
    cout<<vec[0]<<" "<<vec[1]<<" "<<vec[2];
    
    return 0;
}