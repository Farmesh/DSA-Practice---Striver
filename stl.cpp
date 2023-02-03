// c++ STL is Divided into 4 parts 
//   1. Algorithm 
//   2. Containers   //vector ,set ,map etc
//   3. Functions 
//   4. Iterators --- points to memory address{
  // syntax
  // vector<int>::iterator = v.end(); ---
  // vector<int>::iterator = v.begin();
 
// }



#include <bits/stdc++.h>
using namespace std;

//pairs
  void explainpair(){
    pair<int , int> pr ={1,3};

    cout<< pr.first <<" "<<pr.second<<endl;

    pair<int,pair<int,int>>p = {1,{3,4}};
    
     cout<< p.first <<" "<< p.second.second <<" " << p.second.first<<endl;

     pair<int,int> arr[] ={ {1,2},{3,2},{6,7}};

     cout <<arr[1].second;
  }





  
int main(){
  
explainpair();

    return 0;
}








