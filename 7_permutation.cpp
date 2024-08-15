#include<bits\stdc++.h>
using namespace std;

int main(){
char a[]= "abcdccxz";
char b[] ="zxccdcab";
int freq[26] = {0};
for(int i = 0; a[i] !='\0' ; i++){
    int index = (a[i]-'a');
    freq[index]++;
}
for(int i = 0; b[i] !='\0' ; i++){
    int index = (b[i]-'a');
    freq[index]--;
}
bool ispermutation= true;
for(int i =0; i< 26; i++){
    if(freq[i] != 0){
        ispermutation= false;
        break;
    }
}
if(ispermutation){
    cout << "hai";
}
else{
    cout << "nahi hai";
}
    return 0;
}