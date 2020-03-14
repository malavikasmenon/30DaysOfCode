#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
     int n;
     cin>>n;
     std::map<string,string> ph;
     std::map<string,string>::iterator it;
     int i,flag;
     string key,value,query,vals;
     for(i=0;i<n;i++)
     {  
         cin>>key;
         cin>>value;
         ph[key]=value;
         //cout<<"Printing input values"<<endl;
         //cout<<"Key "<<key[i]<<" "<<"Value "<<ph[key[i]]<<endl;
     }
     //cout<<"Input done"<<endl;

     while(cin>>query)
     {   flag=0;
         //cout<<"Query =" <<query[i]<<endl;
         it=ph.find(query);
        if(it == ph.end()) 
            cout << "Not found"<<endl ; 
        else
            cout << it->first << "=" << it->second<<endl ; 
      
   

           
     } 
    return 0;
}
