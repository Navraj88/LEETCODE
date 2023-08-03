class Solution {
public:
    map<char,string>m;
    vector<string>ans;
    void generate(string& d,string& temp,int index){
        if(d==""){
            return;
        }
        if(temp.size()==d.size()){
            ans.push_back(temp);
            return;
        }
        string s=m[d[index]];
        for(int i=0;i<s.size();i++){
            temp.push_back(s[i]);
            generate(d,temp,index+1);
            temp.pop_back();
        }

    }
    vector<string> letterCombinations(string d) {
        m['1']="";
        m['2']="abc";
        m['3']="def";
        m['4']="ghi";
        m['5']="jkl";
        m['6']="mno";
        m['7']="pqrs";
        m['8']="tuv";
        m['9']="wxyz";
        string temp;
        generate(d,temp,0);
        return ans;
    }
};
