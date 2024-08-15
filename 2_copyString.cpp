#include<bits\stdc++.h>
using namespace std;

int main(){
    char a[100] ;
    char b[100] ="hello";
    int lenb = strlen(b);
    int i= 0;
    while(i<= lenb){
        a[i] = b[i];
        i++ ;

    }
    cout << a<< endl;
    return 0;
}