#include<iostream>
#include<math.h>
using namespace std;
void findroots(int a,int b,int c){
	if(a==0)
		cout<<"Invalid";
 int d=b*b-4*a*c;
 double sqrt_val=sqrt(abs(d));
 if(d>0)
 {
	 cout<<"Roots are real & different\n";
	 cout<<(double)(-b + sqrt_val)/(2*a)<<"\n"
		 <<(double)(-b - sqrt_val)/(2*a);
 }
 else if (d==0){
      cout<<"Roots are Real & same\n";
      cout<<-(double)b/(2*a);
 }
 else{
        cout << "Roots are complex \n";
        cout << -(double)b / (2 * a) << " + i" << sqrt_val
             << "\n"
             << -(double)b / (2 * a) << " - i" << sqrt_val;
    }
}

int main()
{
	int a,b,c;
        cout<<"Enter three Values for a,b & c=";
	cin>>a>>b>>c;
        findroots(a,b,c);	
	return 0;
}
