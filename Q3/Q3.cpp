#include <iostream>

using namespace std;

int main()
{
     int N,St1=0,St2=1,nextSt;

    cout<<"Input the number of sequence"<< endl;
    cin>>N;
    cout<<"Fibonacci sequence:"<<endl;

    for (int i=0; i<N;i++){

        cout<<St1<<" ";

        nextSt = St1+St2;

        St1 = St2;
        St2 = nextSt;
    }
    return 0;
}

