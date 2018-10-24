#include <iostream>
#include <stack>
#include <cstring>
using namespace std;

bool CheckBalancedParanthesis(char c[], int n){
	stack<char> S;
	for (int i=0; i<n; i++){
		if(c[i] == '(' || c[i] == '[' || c[i] == '{'){
			S.push(c[i]);
		}
		else if(c[i] == ')' || c[i] == ']' || c[i] == '}'){
			if(S.empty()){
				return false;
			}
			else{
				S.pop();
			}
		}
	}
	if(S.empty()){
		return true;
	}
	else return false;
	
}
int main(){
	char c[70];
	cout<<"enter the expression";
	cin>>c;
	cout<<CheckBalancedParanthesis(c, strlen(c));
}

