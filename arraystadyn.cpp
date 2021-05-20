#include<iostream>
using namespace std;
int main(){
   int A[5]={2,4,6,8,10};
   int *p;
   int i;
   p=new int[5];
   for (i=0;i<5;i++)
   {
      cout<<"\n Enter The Elements";	   
      cin>>p[i];
   }
   for(i=0;i<5;i++)
   {
       cout<<"\n"<<A[i];
   }
    for(i=0;i<5;i++)
   {
       cout<<"\n"<<p[i];
   }
   
}
