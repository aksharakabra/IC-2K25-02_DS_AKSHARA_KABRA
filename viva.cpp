//  second que
#include <iostream>
using namespace std;
class stacky{
    private:
    char *arr;
    int capacity, top;
    public:
    stacky(int m){
        capacity = m;
        arr= new char[capacity];
        top= -1;
    }
    
    // push 
    void push(char x){
       if (top==capacity-1){ 
           cout<<"overflow stack\n";
           return;
        }
       arr[++top]= x;
       cout<<"we pushed a number\n";
        
    }

    // peek
    int peek(){
        if (top==-1){
            cout<<"underflow stack\n";
            return -1;
        }  
        return arr[top];
    }
    // display
void display(){
    if (top==-1){
            cout<<"underflow stack\n";
            return;
        }
else
        {cout<<"\nthe stack is: ";
    for(int i=0; i<=top; i++){
        cout<<arr[i]<<endl;}}}
};


    int main(){
        stacky s(5);
        s.push('a');
    s.push('b');
        s.push('c');
        s.push('d');
        s.push('e');
     s.peek();
        s.display();
        return 0;
}

