class Solution {
public:
    bool isValid(string str) {
        stack<char> s;
        for(char c:str){
            if(c==')' or c==']' or c=='}'){
                if(s.size()==0) return false;
            }
            if(c=='(' or c=='[' or c=='{'){
                s.push(c);
            }
            if(c==')'){
                if(s.top()=='(') 
                    s.pop();
                else return false;
            }
            if(c==']'){
                if(s.top()=='[')
                   s.pop();
                else return false; 
            }
            if(c=='}'){
                if(s.top()=='{') 
                    s.pop();
                else return false;
            }
        }
        if(s.size()==0) return true;
        return false;
    }
};
