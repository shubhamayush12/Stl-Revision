// Deque Sequence Containers
                             //-> for revison  c++ stl :)
#include<bits/stdc++.h>
using namespace std;
int main(){
	deque<int>qw;
	qw.push_back(1);
	qw.push_back(2);
	qw.push_front(3);   // 13 will be inserted from front 
	qw.push_front(4);


    while(!qw.empty()){
    cout<<qw.front()<<endl;
    qw.pop_front();
 
    }

return 0;




}                             