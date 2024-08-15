#include<bits\stdc++.h>
using namespace std;
void rotatestring(char*a, int k){
    int len = strlen(a);
    k %= len ;
    // 1. shift all the characters k times ahead from last one
    int i= len-1;
    while(i>=0){
        a[i+k] =a[i];
        i--;

    }
    // 2. bring the k times character ahead from len position
     i= len;
     int j=0;
     while(j<k){
     a[j] = a[i];
     i++;
     j++;
     }
    cout << a<< endl;
    //3. add null value at len position
    a[len] = '\0';
}
int main(){
char a[100] = "coding";
rotatestring(a, 1201);
cout << a<< endl;
    return 0;
}