#include<iostream>
#include<string.h>
using namespace std;
int main(){
	int a[27];	
	string s;
	while(cin >> s){
		for (int i = 0 ; i<27 ; ++i){
			a[i] = 0;
		}
		int len = s.length();
		char c[len];
		strcpy(c,s.c_str());
		for(int i = 0 ; i<len ; ++i){
			a[c[i]-96] ++;
		}
		int i = 0;
		for(i = 0 ; i<len ; i++){
			if (a[c[i]-96] == 1) break;
		}
		if (i == len) 
			cout << -1;
			
		else
			cout << i;
	}
	
	return 0;
}
