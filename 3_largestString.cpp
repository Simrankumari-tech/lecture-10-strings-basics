#include<bits\stdc++.h>
using namespace std;
void copystring(char*a, char*b){
	int lenb = strlen(b);
	int i= 0;
	while(i<= lenb){
		a[i] = b[i] ;
		i++ ;
	}
}

int main(){
	char a[100] ,largest[100];
	int n, len_a=0, len_largest = 0;
	cin >> n;
	cin.ignore();
	for(int i=0 ; i<n ; i++){
		cin.getline(a,100);
		len_a =strlen(a);     //jo string aayi hai uski length nikali
		if(len_a > len_largest){
			strcpy(largest , a);  // largest k ander array a ko copy kardo
			len_largest = len_a; // uske baad largest m value daal k update krdo
		}
	}
	cout << "largest : " << largest << endl;
	cout << " length kargest : " << len_largest << endl; 
    return 0;
}