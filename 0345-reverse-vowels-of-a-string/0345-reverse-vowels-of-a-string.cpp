class Solution {
public:
    bool isVowel(char k)
    {
        if(k=='a' ||k=='e' || k=='i' || k=='o' || k=='u' || k=='A' || k=='E' || k=='I' || k=='O' || k=='U')
        {
            return true;
        }else{
            return false;
        }
    }
    string reverseVowels(string s) {
        int i=0;
        int j= s.length()-1;

        while(i<=j)
        {
            if(isVowel(s[i]))
            {
                if(isVowel(s[j]))
                {
                    char temp = s[j];
                    s[j] = s[i];
                    s[i] = temp;
                    i++;
                    j--;
                }else{
                    j--;
                }
            }else{
                i++;
            }
        }
        return s;
    }
};