//Vectors Sequence Containers
                                       //-> for revision and understanding.  :)


#include<bits/stdc++.h>     
using namespace std;
int main()
{
vector<int>v;
v.push_back(1);
v.push_back(2);
v.push_back(3);
v.push_back(4);
v.push_back(5);
//v.pop_back();
//v.resize(2);                  // for increasing the size

//cout<<v.size()<<endl;             // for size of vectors
//for(int i = 0; i<v.size();i++){             // for printing the vector
	//cout<<v[i]<<"";
	//v.clear();  // for removing elements of vector
	//cout<<v.empty()<<endl;    // 0 if vector is not empty     
	//cout<<v.size()<<endl;
    //v.erase(v.begin()+1);     //pointing to the second element 
    //for(int i = 0; i<v.size();i++){
    	v.insert(v.begin()+1,8);      // inserting 8 at second position
    
    	  //for(int i = 0; i<v.size();i++)
    	  	//	cout<<v[i]<<endl;
    	  	reverse(v.begin(),v.end());         // reverse the vector
           // for(int i = 0; i<v.size();i++)
    	  	//	cout<<v[i]<<endl;
    	  	sort(v.begin(),v.end());
    	  	for(int i = 0; i<v.size();i++)
    	  		cout<<v[i]<<endl;

    }





