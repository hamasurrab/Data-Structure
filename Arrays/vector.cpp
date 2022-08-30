#include<iostream>
#include<vector>
using namespace std;


int main(){


    // initialize vector
    vector<int>arr={1,2,3,4,5,6,7,8,9};

    /* fill constructor
    vector<int> arr(10,7);*/

//push back------it will automatically psh inside array and double its capacity
arr.push_back(14);

//pop back 
arr.pop_back();

//print all element
for(int i=0;i<arr.size();i++){
    cout<<arr[i]<<endl;
}
cout<<"__________________________________"<<endl;
    //size of a vector
    cout<<arr.size()<<endl;


    // capacity of vector 
    cout<<arr.capacity();

    return 0;

}