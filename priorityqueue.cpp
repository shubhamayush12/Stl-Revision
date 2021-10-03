 //priority queue Container Adaptors
                                       //-> for revision and understanding.  :)

#include<iostream>
#include<queue>     // header file for priority queue
using namespace std;
void showpriorityQueue(priority_queue<int>pq){      //function for printing  priority_queue  :)
    priority_queue<int>qw = pq;
    while(!qw.empty()){
    cout<<qw.top()<<"";
    qw.pop();
    }
    cout<<endl;
}





int main(){
	priority_queue<int>qw;
    qw.push(10);
    qw.push(-3);
    qw.push(7);
    qw.push(8);
    showpriorityQueue(qw);
    cout<<qw.size()<<endl;
    qw.pop();
    qw.pop();
     showpriorityQueue(qw);
}





    