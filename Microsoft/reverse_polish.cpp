#define ll long long
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
    for(ll i=0;i<tokens.size();i++){
        ll flag=0;
        if(tokens[i]=="+"){
            ll b=st.top();
            st.pop();
            ll a=st.top();
            st.pop();
            st.push(a+b);
        }
        else if(tokens[i]=="-"){
            ll b=st.top();
            st.pop();
            ll a=st.top();
            st.pop();
            st.push(a-b);
        }
        else if(tokens[i]=="/"){
            ll b=st.top();
            st.pop();
            ll a=st.top();
            st.pop();
            st.push(a/b);
        }
        else if(tokens[i]=="*"){
            ll b=st.top();
            st.pop();
            ll a=st.top();
            st.pop();
            st.push(a*b);
        }
        else{
            ll k=stoi(tokens[i]);
            st.push(k);
        }
    }
    return st.top();

    }
};