// CREATED BY MUHAMMAD HANAN ASGHAR
// PYTHONIST
#include <iostream>
using namespace std;
class Queue{
  int front = -1;
  int rear = -1;
  int arr[10];
  int size = 10;
  public:
  Queue(){
    front = -1;
    rear = -1;
  }
  void Insert(int data){
    if(rear >= size){
      cout<<"Queue Overflow"<<endl;
    }else{
      rear = rear + 1;
      arr[rear] = data;
  }
}
  void Pop(){
    if(front == -1 && rear == -1){
      cout<<"No Queue Found"<<endl;
    }else{
      int temp = arr[front];
      front = front + 1;
      cout<<"Data Deqqued."<<temp;
    }
  }
  void Display(){
    if(front == -1 && rear == -1){
      cout<<"No Data Found."<<endl;
    }else{
      for(int i = front;i<=rear;i++){
        cout<<"Data - "<<arr[i]<<endl;
      }
    }
  }
};


int main() {
  Queue q;
  q.Insert(12);
  q.Insert(34);
  q.Insert(54);
  q.Insert(23);
  cout<<endl;
  q.Pop();
  cout<<endl;
  q.Pop();
  cout<<endl;
  q.Display();
}
