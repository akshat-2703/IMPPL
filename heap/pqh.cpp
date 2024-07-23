#include<iostream>
#include<queue>
using namespace std ;

int main(){
    //maxheap
priority_queue<int>pq ;
pq.push(4) ;
pq.push(2) ;
pq.push(5) ;
pq.push(3) ;

cout<<"element at top" <<pq.top() <<endl ;
pq.pop() ;

cout<<"element at top"<<pq.top()<<endl ;
cout<<"Size is"<<pq.size()<<endl ;
if(pq.empty()){
    cout<<"pq.empty"<<endl ;
}
else{
    cout<<"pq not emp"<<endl ;
}


priority_queue<int,vector<int>,greater<int>>minheap ;
minheap.push(4) ;
minheap.push(2) ;
minheap.push(5) ;
minheap.push(3) ;

cout<<"element at top" <<minheap.top() <<endl ;
minheap.pop() ;

cout<<"element at top"<<minheap.top()<<endl ;
cout<<"Size is"<<minheap.size()<<endl ;
if(minheap.empty()){
    cout<<"minheap.empty"<<endl ;
}
else{
    cout<<"minheap not emp"<<endl ;
}


}