class Solution
{
public:
    string removeDuplicateLetters(string s)
    {
        vector<int> last_occurrence(26, -1);
        vector<bool> used(26, false);
        stack<char> st;

        // Calculate the last occurrence of each character in the string
        for (int i = 0; i < s.size(); ++i)
        {
            last_occurrence[s[i] - 'a'] = i;
        }

        for (int i = 0; i < s.size(); i++)
        {
            char curr = s[i];

            if (!used[curr - 'a'])
            {
                while (!st.empty() && curr < st.top() && last_occurrence[st.top() - 'a'] > i)
                {
                    used[st.top() - 'a'] = false;
                    st.pop();
                }
                st.push(curr);
                used[curr - 'a'] = true;
            }
        }

        string res(st.size(), ' ');

        for (int i = st.size() - 1; i >= 0; --i)
        {
            res[i] = st.top();
            st.pop();
        }

        return res;
    }
};
