class Solution {
public:
    vector<string> generateParenthesis(int n) 
    {
        vector<string> Parenthesis ;
        generateParenthesis(0,0,n,"",Parenthesis);
        return Parenthesis;
        
    }

    void generateParenthesis(int left,int right,int n,string s,vector<string>& Parenthesis)
    {
        if(s.length() == n * 2 )
        {
            Parenthesis.push_back(s);
            return; 
        }
        if(left < n)
            generateParenthesis(left+1,right,n,s+"(",Parenthesis);
        if(right < left)
            generateParenthesis(left,right+1,n,s+")",Parenthesis);
        
    }
};