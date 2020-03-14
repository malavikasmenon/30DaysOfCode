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
     int i,flag;
     string key[10],value[10],query[10000];
     for(i=0;i<n;i++)
     {  
         cin>>key[i];
         cin>>value[i];
         ph[key[i]]=value[i];
         //cout<<"Printing input values"<<endl;
         //cout<<"Key "<<key[i]<<" "<<"Value "<<ph[key[i]]<<endl;
     }
     //cout<<"Input done"<<endl;

     while(cin>>query[i])
     {   flag=0;
         //cout<<"Query =" <<query[i]<<endl;
         for(auto el:ph){
             //cout<<el.first<<"and"<<el.second<<endl;
             if(query[i]==el.first)
                {cout<<el.first<<"="<<el.second<<endl;
                    flag=1;
                }
           
         }
         if(flag==0)
            cout<<"Not found"<<endl;
         i++;
     }
    return 0;
}
