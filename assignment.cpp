#include <iostream>
#include <string>
using namespace std;

int main(){
    int i=16;
    int sum=0;
    do{
        sum+=i;
        i--;
    }while(i!=0);
    cout<<sum;
}