class Solution {
public:
     string orderlyQueue(string s, int k) {
        if(k==1)
        {
            string prev=s;
            string ans=s;
            for(int i=0;i<s.size();i++)
            {
               string temp=s.substr(i,s.size()-i)+s.substr(0,i);
                if(temp<prev)
                {
                    ans=temp;
                    prev=temp;
                }
            }
            return ans;
        }
       sort(s.begin(),s.end());
         return s;
    }
};