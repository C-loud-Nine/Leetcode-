class Solution {
public:
    char findTheDifference(string s, string t) {

        sort(s.begin(),s.end());
        sort(t.begin(),t.end());

        for(int i=0,j=0;i<s.length();j++){
            if(s[i]==t[j]) {t[j]='0';s[i]='0';i++;}
        }

        int g=t.size();
        char a;

        for(int i=0;i<g;i++){
            if(t[i]!='0') {a=t[i]; break;}
        }

        return a;
        
    }
};
