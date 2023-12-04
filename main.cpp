#include <iostream>

using namespace std;

long long iterative_factorial(long long n){
    long long sum=1;
    for(int i=1;i<=n;i++){
        sum*=i;
    }
    return sum;
}

long long recursive_factorial(long long n){
    if(n==1)
        return 1;
    else
        return n*recursive_factorial(n-1);
}

int main()
{
    long long n;
    cout<<"Enter number to calculate the factorial : \n";
    cin>>n;

    //cout<<iterative_factorial(n)<<endl;
    cout<<recursive_factorial(n)<<endl;

    return 0;
}
