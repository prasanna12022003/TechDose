vector<int> v1(26,0);
        for(int i=0;i<s.length();i++)
        {
            v1[s[i]-'a']++;
        }
        vector<int> v2(26,0);
        for(int i=0;i<target.length();i++) 
        {
            v2[target[i]-'a']++;
        }
        int mini = INT_MAX;
        for(int i=0;i<target.length();i++)
        {
            int a = v1[target[i]-'a'];
            int b = v2[target[i]-'a'];
            mini = min(mini,a/b);
        }
        return mini;