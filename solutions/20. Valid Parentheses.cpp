class Solution {
public:
    bool isValid(string s) {
     stack<char> res;
        for (auto i:s)
        {
            if (i=='(' or i=='{' or i=='[')
            {res.push(i);}
        else 
        {if ( res.empty() or 
            (res.top()=='(' & i!=')') or
            (res.top()=='{' & i!='}') or
            (res.top()=='[' & i!=']'))
            {return false;}
            res.pop();
          } //pay attention to how to parenthesis the for and if 
        }
    return res.empty();
   }
};
​
​
​
