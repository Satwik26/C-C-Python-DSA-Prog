#include <iostream>
#include<stack>
#include<algorithm>
using namespace std;
int prec(char s){
    if(s=='+'||s=='-'){
        return 1;
    }else if(s=='*'||s=='/'){
        return 2;
    }else{
        return -1;
    }
}
string infixtoprefix(string s){
    stack<char> st;
    string res;
    for(int i=s.length()-1;i>=0;i--){
        if(s[i]>='a'&&s[i]<='z'||s[i]>='A'&&s[i]<='Z'){
            res+=s[i];
        }else if(s[i]==')'){
            st.push(s[i]);
        }else if(s[i]=='('){
            while(!st.empty()&&st.top()!='('&&st.top()!=')'){
                res+=st.top();
                st.pop();
            }
            if(!st.empty()){
                st.pop();
            }
        }else{
            while(!st.empty()&&prec(st.top())>prec(s[i])){
                res+=st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while(!st.empty()){
        res+=st.top();
        st.pop();
    }
    reverse(res.begin(),res.end());
    return res;
}
int main()
{
    cout<<infixtoprefix("(a-b/c)*(a/k-l)");
    return 0;
}
