#include<iostream>
using namespace std;
class VECTOR{
    public:
int size;
int capacity;
int *arr;
  VECTOR(){
    size=0;
    capacity=1;
    arr=new int[capacity];
  }

void add(int ele){
    if(size==capacity){
        capacity*=2;
        int *temp=new int[capacity];
        for(int i=0;i<size;i++){
            temp[i]=arr[i];
        }
        delete [] arr;
        arr=temp;
    }
    arr[size]=ele;
    size++; 
}

void pop(){
    if(size>0){
        size--;
    }
}

void display(){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

};
int main(){
    VECTOR v;
    v.add(10);
    v.add(20);
    v.add(30);
    v.display();
    v.pop();
    v.display();
    return 0;
}
