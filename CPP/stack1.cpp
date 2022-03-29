#include <iostream>
#include<stack>
using namespace std;
void insertatBottom(stack<int> &st,int ele){
    if(st.empty()){
        st.push(ele);
        return;
    }
    int topele=st.top();
    st.pop();
    insertatBottom(st,ele);
    st.push(topele);
}


void reverse(stack<int> &st){
    if(st.empty()){
        return;
    }
    int ele=st.top();
    st.pop();
    reverse(st);
    insertatBottom(st,ele);
}
int main()
{
    stack<int> st;
    st.push(4);
    st.push(5);
    st.push(6);
    reverse(st);
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }

    return 0;
}
