
//Queue a Container Adaptor
                            //-> for revision and understanding.  :)

#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,c,d,e,f;cin>>a>>b>>c>>d>>e>>f;  
	queue<int>qw;   //in queue elements are added from backa nd removedfrom front
	qw.push(a);
	qw.push(b);
	qw.push(c);
	//cout<<qw.size()<<endl;
	//cout<<qw.front()<<endl;
	//cout<<qw.back()<<endl;
	//cout<<qw.empty()<<endl;
	//while(!qw.empty()){    //until qw is not empty
    //cout<<qw.front()<<endl;
    //w.pop();
    //cout<<qw.front()<<endl;
	queue<int>q;
   q.push(d);
   q.push(e);
   q.push(f);
    qw.swap(q);  //for swapping qw and q
cout<<qw.front()<<endl;
}