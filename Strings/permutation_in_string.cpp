#include <iostream>
#include <string>

using namespace std;

bool Is_same(int freq1[], int freq2[]){
    for(int i=0; i<26; i++){
        if(freq1[i] != freq2[i])
            return false;
    }
    return true;
}

bool checkinclusion(string s1, string s2){
    int freq[26] = {0};

    for(char c : s1){
        freq[c - 'a']++;
    }

    int window_size = s1.length();

    
    for(int i = 0; i + window_size <= s2.length(); i++){
        int wind_freq[26] = {0};
        int idx = i, wind_idx = 0;

        
        while(wind_idx < window_size && idx < s2.length()){
            wind_freq[s2[idx] - 'a']++;
            wind_idx++;
            idx++;
        }

        if(Is_same(freq, wind_freq))
            return true;
    }

    return false;
}

int main(){
    string str1, str2;

    cout << "enter string whose permutation to be checked: ";
    getline(cin, str1);

    cout << "Enter original string: ";
    getline(cin, str2);

    if(checkinclusion(str1, str2))
        cout << "permutation present\n";
    else
        cout << "permutation not present\n";

    return 0;
}
