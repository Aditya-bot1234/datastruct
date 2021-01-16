#include<iostream>
using namespace std;
int main(){
system("cls");
    int i,arr[98];
    cout<<"Enter single or dual digit number: "; 
    for(i=0;i<=98;i++)
    {
        cin>>arr[i];
        if(arr[i]==42)
        {
            break;
        }
        cout<<arr[i]<<endl;
    }

return 0;
}