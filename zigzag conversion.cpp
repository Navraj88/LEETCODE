class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1) return s; // if numRows is 1, return the original string as it can't be converted
        vector<string>z(numRows,""); // create a vector of strings with numRows number of empty strings
        bool flag=true; // flag to keep track of whether we are moving downwards or upwards in the zigzag pattern
        int n=numRows,i=0,c=0,v=s.length(); // initialize variables n as numRows, i as the current row, c as the index of the current character, v as the length of the original string
        while(c<v){
            z[i]+=s[c]; // add the current character to the string in the current row
            if(flag==true){ // if moving downwards in the zigzag pattern
                i++; // move to the next row
                if(i==n-1){ // if we have reached the last row
                    flag=false; // switch to moving upwards in the zigzag pattern
                }
            }
            else{ // if moving upwards in the zigzag pattern
                i--; // move to the previous row
                if(i==0){ // if we have reached the first row
                    flag=true; // switch to moving downwards in the zigzag pattern
                }   
            }
            c++; // move to the next character in the original string
        }
        string t=""; // initialize an empty string to store the converted zigzag pattern
        for(int i=0;i<z.size();i++){ // loop through each row in the vector of strings
            t+=z[i]; // concatenate the strings in each row to the final string
        }
        return t; // return the final converted string
    }
};
