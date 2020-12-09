//Question 2
#include <iostream>


using namespace std;
//Find the Minimum and Maximum numbers
int main()
{
    int Arr[6] = {4, 6, 8, 2, 9, 3};
    int Maxi = Arr[0];
    int Mini = Arr[0];

    int a;
    for (a=1;a<6;a++){
        if (Mini>Arr[a])
            Mini=Arr[a];
        if (Maxi<Arr[a])
            Maxi=Arr[a];
    }
    cout<<"The minimum number is = "<<Mini<<endl;
    cout<<"The maximum number is = "<<Maxi<<endl;

    return 0;
}
