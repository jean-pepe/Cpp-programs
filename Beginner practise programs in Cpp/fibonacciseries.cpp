#include<bits/stdc++.h>
using namespace std;
void findfibonacci()
{
    long long nterms;
    cout<<"Till what terms you want to find Fibonacci series? (min value allowed = 2 and max value allowed = 60) :";
    cin>>nterms;

    if(nterms<2 && nterms>60){
        cout<<"Wrong value entered, you cannot enter value less than 2 or greater than 60";
        return;
    }

    long long a=0, b=1;
    cout<<a<<" ";
    for(long long i=0; i<nterms-1; i++)
    {
        cout<<b<<" ";

        b = a + b;
        a = b - a;
    }
}

int main()
{
    cout<<">>Author: Swati Tripathi (swati_gwc)"<<endl;
    cout<<"Program to fibonacci till n terms"<<endl;
    findfibonacci();
    return 0;
}

/*
>>Author: Swati Tripathi (swati_gwc)
Program to fibonacci till n terms
Till what terms you want to find Fibonacci series? (min value allowed = 2 and max value allowed = 60) :60
0 1 1 2 3 5 8 13 21 34 55 89 144 233 377 610 987 1597 2584 4181 6765
10946 17711 28657 46368 75025 121393 196418 317811 514229 832040 
1346269 2178309 3524578 5702887 9227465 14930352 24157817 39088169
63245986 102334155 165580141 267914296 433494437 701408733 1134903170
1836311903 2971215073 4807526976 7778742049 12586269025 20365011074 
32951280099 53316291173 86267571272 139583862445 225851433717 365435296162
591286729879 956722026041
*/
