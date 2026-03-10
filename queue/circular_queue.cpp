#include <iostream>
using namespace std;

class circular{
    int* arr;                // array pointer 
    int currsize, cap;
    int f, r;

    public:
    circular(int size){
        cap = size;
        currsize=0;
        arr= new int [cap];
        f = 0 ;
        r = -1;
    }

    void push( int data){
        if (currsize==cap){
            cout<<"q is full"<<endl;
            return ;

        }
        r = (r+1)% cap;          //rear ko phle incrrease krenge 
        arr[r]= data;
        currsize++;              // ise increase kr denge 
    }
    void pop(){
        if (empty()){
            cout<<"empty"<<endl;
            return ;
        }
        f= (f+1)% cap;
        currsize--;                // we are loggicall y deeting th edata, its still there in the memeory but not part of the queue, will be overwritten in new push;
        
    }
    int front(){
        if (empty()){
            cout<<"empty"<<endl;
            return -1;
        }
        return arr[f];
    }
    bool empty(){
        return currsize== 0;
    }

};

int main() {
    circular q(3);
    q.push(1);
    q.push(7);
    q.push(9);
    q.pop();
    q.push(10);


    // ye hame exact queye ka ordeer dega front se rear tak , not just arryay ko print krega
     while(!q.empty()){
       cout<<q.front()<<" " ;
       q.pop();
   }
   cout<<endl;
    

    return 0;
}