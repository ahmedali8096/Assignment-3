#include <iostream>
using namespace std;
int main(){
    int n;
    int temp;
    cout<<"Enter The Array Character Size: ";
    cin>>n;
    int Array[n];
    cout<<"Enter The Array Values: ";
    for(int a=0;a<n;a++){
        cin>>Array[a];
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(Array[j]>Array[j+1]){
               temp= Array[j];
               Array[j]=Array[j+1];
               Array[j+1]=temp;
            }
            

        }
    }
    cout<<"The Ascending Order of integers are: ";
    for(int i=0; i<n;i++)
    {
        cout<<Array[i]<<" ";
        
    }
    
    return 0;
}