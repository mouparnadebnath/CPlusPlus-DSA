#include<iostream>
using namespace std;
#define a 100
class Queue{
    int* arr;
    int front, back;
    public:
    Queue(){
arr=new int[a];
front=-1;
back=-1;
    }
    void enqueue(int x){
        if(back==a-1){
cout<<"Queue Overflow";
return;
        }
back++;
arr[back]=x;
if (front==-1)
{
 front++;
}

    }
    
    void dequeue(){
if (front==-1 || front>back){
    cout<<"Queue is empty"<<endl;
    return;
}
front++;
    }
    int peek(){
        if (front==-1 || front>back){
    cout<<"Queue is empty"<<endl;
    return -1;
}
return arr[front];
    }
    bool empty(){
     if (front==-1 || front>back)
     {
        return true;
        /* code */
     }
     return false;
    }
    };
    int main(){
        Queue q;
        q.enqueue(10);
        q.enqueue(20);
        cout<<q.peek()<<endl;
        q.dequeue();
        cout<<q.peek()<<endl;
        cout<<q.empty()<<endl;
        q.enqueue(30);
        cout<<q.empty()<<endl;
        q.dequeue();
        cout<<q.empty()<<endl;
        q.dequeue();
        cout<<q.empty()<<endl;

        return 0;
    }