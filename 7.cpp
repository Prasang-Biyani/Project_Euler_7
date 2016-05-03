#include<iostream>
#include<cmath>
using namespace std;
static const unsigned long long int N=190000;
int main()
{
    int prime_num = 10001;
    unsigned long long int i,j,num[N];
    for(i=2;i<N;i++)
        num[i]=1;
    for(i=2;i<sqrt(N);i++)
    {
        if(num[i]) {
        for(j=i;j*i<N;j++) {
            num[i*j]=0;
            }
        }
    }
    int count = 0;
    for(i=2;i<N;i++) {
        if(num[i]) {
            count++;
        }
        if (count == prime_num) {
            cout<<i<<" ";
            break;
        }
    }
    return 0;
}
