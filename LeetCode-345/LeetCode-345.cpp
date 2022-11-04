#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <list>

using namespace std;

const char vowels[] = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U' };

bool isVowel(char character) {
    for (char vowel : vowels) {
        if (vowel == character)
            return true;
    }

    return false;
}

string reverseVowels(string s) {
    int i = 0;
    int j = s.size();

    for (i = 0; i < j; ++i) {
        if (isVowel(s[i])) {
            for (; j > i; --j) {
                if (isVowel(s[j])) {
                    if (s[i] != s[j])
                        swap(s[i], s[j]);

                    --j;
                    break;
                }
            }
        }
    }

    return s;
}

int main()
{
    string s = "leetcode";

    printf("%s\n", reverseVowels(s).c_str());
}


//   2. 使用 [Team Explorer] 視窗，連線到原始檔控制
//   3. 使用 [輸出] 視窗，參閱組建輸出與其他訊息
//   4. 使用 [錯誤清單] 視窗，檢視錯誤
//   5. 前往 [專案] > [新增項目]，建立新的程式碼檔案，或是前往 [專案] > [新增現有項目]，將現有程式碼檔案新增至專案
//   6. 之後要再次開啟此專案時，請前往 [檔案] > [開啟] > [專案]，然後選取 .sln 檔案
