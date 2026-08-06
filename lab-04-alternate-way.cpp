#include <iostream>
using namespace std;
int main(){
    int s1,i;
    cout<<"Enter the size of both arrays"<<endl;
    cin>>s1;

     //validity    
    if(s1<=0){
        cout<<"invalid, dumbo! JUST PUT AN INTEGER";
        return (1);
    }

    // allocate memory
    int* ar1 =new int[s1];
    int* ar2 = new int[s1];
    
    cout<<" enter " <<s1<<" integers"<<endl;
    for(i=0; i<s1; i++){
        cout<<"Enter elements "<<i+1<<": ";
        cin>>ar1[i];
    }
    
    cout<<"\n\nFor the second array"<<endl<<" enter " <<s1<<" integers"<<endl;
    for(i=0; i<s1; i++){
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
    for(int j=0; j<s1; j++){
        cout<<matrix[1][j]<<" ";
    }
    cout<<endl;
    
cout<<"NOW we will transpose"<<endl;
for (i = 0; i< s1; i++)   // number of columns
{
    cout << matrix[0][i] << " " << matrix[1][i] << endl;
}
    delete[] ar1;
    delete[] ar2;
    return 0;
    
}
