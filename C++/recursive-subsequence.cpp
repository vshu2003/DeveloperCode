#include<bits/stdc++.h>
using namespace std;
//function for recursive subsequence
void recursive_subsequence(int arr[],int index,vector<int>ds,int size)
{ 
    if(index>=size)
    {
        for(auto it : ds)
        {
            cout<<it<<" ";
        }
        if(ds.size()==0)
        cout<<"{}";
     cout<<endl;
    return;
    }
 ds.push_back(arr[index]);
 recursive_subsequence(arr,index+1,ds,size); //using bfs for the subsequence. 
 ds.pop_back(); //for poping the existing number in the subsequence.
 recursive_subsequence(arr,index+1,ds,size); 
}

//driver code
int main()
{
    int arr[]= {3,1,2};//array initialization
    vector<int>ds;
    int size  = 3;
    recursive_subsequence(arr,0,ds,size);//calling the function.
    
    return 0;
}
//this code is contributed by Rudra pratap singh