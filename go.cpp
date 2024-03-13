#include <iostream>
using namespace std;
int main( )
{
int i, x[6], min=9999;
cout<<"enter X:";
 for(i=0; i<6; i++)
 cin>>x[i];
 for(i=0; i<6; i++)
 {
 if(min>=x[i])
 min = x[i];
 }
 cout<<"X:";
 for(i=0; i<6; i++)
 cout<<"\t x["<<i<<"]="<<x[i];
 cout<<"\n min="<<min;
}