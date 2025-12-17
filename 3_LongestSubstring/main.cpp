//line 35 - if there is a match, I need to copy the non-repetitive characters prior to sub[j] to the new substring.
//currently, it only compares the last character against the beginning of the string, not keeping track of duplicates.
//I need to iterate through the string backwards.





#include <iostream>

using namespace std;

int lengthOfLongestSubstring(string s)
{
    int answer = 0;
    const int size = s.length();
    string sub;

    if (size > 0)
        {
        sub += s[0];//initialize the substring and count with the first letter in the string
        }

    for (int j = 1; j < size; j++)
    {//this loop looks at the next letter
        for (int k = 0; k < sub.length(); k++)
            {//this loop compares the existing substring against the next letter
            if (sub[k] == s[j])
            {//if there's a match, compare count to answer and reset
                if (sub.length() > answer)
                    {
                    answer = sub.length();
                    }

                string temp;
                int l = 1;
                while (l < sub.length() && sub[j-l] != s[j])
                {
                    temp.insert(0,1,sub[j-l]);
                    l++;
                }

                sub = temp;
            }
        }
        //either way, put the current letter on the substring
        sub += s[j];
    }
    //updates answer in the event of no repeating characters
    if (sub.length() > answer)
    {
        answer = sub.length();
    }

    return answer;
}


int main() {

    int answer = lengthOfLongestSubstring("abcabbbab");

    cout << "answer = " << answer << endl;




    return 0;
}
