#include<bits/stdc++.h>
using namespace std;
void combine(char*a, char*b){
int lena= strlen(a) ,lenb= strlen(b);
int i= lena,j=0;
while(j<=lenb){
    a[i] = b[j];
    i++;
    j++;
}

}
int main(){
char a[] ="hello";
char b[] = "world";
// combine(a,b)  in built function hai 
strcat(a,b); 
cout << a<< endl;

    return 0;
}