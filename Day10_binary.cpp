#include <bits/stdc++.h>
#include<cmath>

using namespace std;



int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    int size;
    size=log2(n);
    size++;
    //cout<<size<<endl;
    int* stack=new int[size];
    int top = 0;
    while(n)
    {
        int d=n%2;
        //cout<<d<<endl;
        n=n/2;
        stack[top++]=d;
    }
    //cout<<"Top="<<top<<endl;
    int* count =new int[size];
    for(int i=top-1,k=0;i>=0;i--,k++)
        {//cout<<i<<" "<<stack[i]<<endl;
        int c=0;
        int j=i;
        while(stack[j]==1)
        {
            c++;
            //cout<<"c="<<c<<endl;
            j--;
        }
        
        count[k]=c;
        //cout<<count[k]<<endl;
        }
    int fc=0;
    for(int i=0;i<size;i++)
    {
       if(count[i]>fc)
        fc=count[i];
    }
    cout<<fc;

    return 0;
}
