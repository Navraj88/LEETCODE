class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1) return s;
        vector<string>z(numRows,"");
        bool flag=true;
        int n=numRows,i=0,c=0,v=s.length();
        while(c<v){
            z[i]+=s[c];
            if(flag==true){
                i++;
                if(i==n-1){
                    flag=false;
                }
            }
            else{
                i--;
                if(i==0){
                    flag=true;
                }   
            }
            c++;
        }
        string t="";
        for(int i=0;i<z.size();i++){
            t+=z[i];
        }
        return t;
    }
};
