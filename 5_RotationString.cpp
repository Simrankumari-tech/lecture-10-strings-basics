#include<bits\stdc++.h>
using namespace std;
void rotateonce(char*a){
    int len = strlen(a);
    char ch= a[len -1];
    int i = len -2;
    while(i>= 0){
        a[i+1] = a[i];
        i--;
    }
    a[0] = ch;
}

int main(){
    char a[] ="coding";
    int k= 1201, len = strlen(a);
    k %= len;
    for(int i =0 ;i<k ;i++){
    rotateonce(a);
    cout << a << endl;
    }
    return 0;

}