 //Stacks Container Adaptors
                                       //-> for revision and understanding.  :)

#include<bits/stdc++.h>     
using namespace std;
int main()
{
stack<int> s;
s.push(1);
s.push(2);
s.push(3);
s.push(4);
//int x = s.size();          //for checking size of stack
//cout<<x<<endl;
//if(s.empty()){
  //  cout<<"stack is empty"<<endl;

//}
    //else{
       // cout<<"stack is not empty"<<endl;
   // }
//int x = s.top();
//cout<<x<<endl;
while(!s.empty()){      // for printing stack
    int x = s.top();
    cout<<x<<"";
    s.pop();

}


}