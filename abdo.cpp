#include <iostream>
using namespace std;

int main() {
int n,min =-1;
cin>>n;
int x[n];
int i=0;
for(;i<n;i++)
{
cin>>x[i];
}

for(;i<n;i++)
{
    min = (x[i] > min)? min:x[i];

}
     cout<<min<<" "<<i<<"\n";

    return 0;
}
