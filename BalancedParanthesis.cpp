#include<bits/stdc++.h>
using namespace std;

bool isbalancedparanthesis(string in){
	int len = in.size();

	stack <char> pstack;
	for(int i = 0;i < len;i++){
		if((in[i]=='(' || in[i] == '{' || in[i] == '['))
			pstack.push(in[i]);
		else if((in[i]==')' || in[i] == '}' || in[i] == ']') && !pstack.empty()){
			if((pstack.top() == '(' && in[i] == ')') || (pstack.top() == '{' && in[i] == '}') || (pstack.top() == '[' && in[i] == ']'))
				pstack.pop();
			else
				return false;
		}
		else
			return false;
	}

	return pstack.empty();
}

int main(){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string input;
    cin>>input;

    bool ans = isbalancedparanthesis(input);

    cout<<ans<<endl;

}
