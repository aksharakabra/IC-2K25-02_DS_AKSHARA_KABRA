#include <iostream>
using namespace std;
int main(){
    int s1,s2,i;
    cout<<"Enter the size of both arrays to transpose"<<endl;
    cin>>s1>>s2;
    
    // validity
    // if(s1<=0){cout<<"Invalid. Dumbo! JUST PUT AN INTEGER";
    //     return 1; }
   
    // if(s2<=0){cout<<"Invalid. Dumbo! JUST PUT AN INTEGER";
    //     return 1; }
    
    
    //  it can be written like this too
    if(s1<=0||s2<=0){
        cout<<"Invalid. Dumbo! JUST PUT AN INTEGER";
        return 1;}
    
    // allocate memory
    int* ar1 =new int[s1];
    int* ar2 = new int[s2];
    
    cout<<" Enter " <<s1<<" integers"<<endl;
    for(i=0; i<s1; i++){
        cout<<"Enter elements "<<i+1<<": ";
        cin>>ar1[i];
    }
    
    cout<<" Enter " <<s2<<" integers"<<endl;
    for(i=0; i<s2; i++){
        cout<<"Enter elements "<<i+1<<": ";
        cin>>ar2[i];
    }
    
    // difficult part
    int* matrix[2];
    matrix[0]=ar1;
    matrix[1]=ar2;
    
    cout<<"\n 2D array of your dream--\n";
    for(i=0; i<s1 ;i++){
        cout<<matrix[0][i]<<" ";
    }
    cout<<endl;
    for(int j=0; j<s2; j++){
        cout<<matrix[1][j]<<" ";
    }
    
    // validity check
    if(s1!= s2){
        cout<<"\n\n ARE YOU DUMB!Dont you know that both sizes should be equal to do the transpose?"<<endl;
    } else{
    // transpose
    cout<<"\n\nNOW we will transpose"<<endl;
    for(int i=0; i<s1; i++){
         cout << matrix[0][i] << " " << matrix[1][i] << endl;
    }}
    cout<<endl;
    delete[] ar1;
    delete[] ar2;
    return 0;
}
