#include <iostream>
#include <algorithm>
#include <deque>
#include <stack>
#include <queue>
#include <string>

using namespace std;

bool is_palindrome_deque(const string &s) 
{
    deque<char>charDeque;
    copy_if(s.begin(), s.end(), back_inserter(charDeque),
                [](char ch) { return isalpha(ch); });
    transform(charDeque.begin(), charDeque.end(), charDeque.begin(), ::toupper);
    return equal(charDeque.begin(), charDeque.end(), charDeque.rbegin());
}

bool is_palindrome_stack_queue(const string &s) 
{
    stack<char> charStack;
    queue<char> charQueue;
    for_each(s.begin(), s.end(), [&](char ch) 
    {
        if (isalpha(ch)) 
        {
            charStack.push(::toupper(ch));
            charQueue.push(::toupper(ch));
        }
    });
    while (!charStack.empty() && !charQueue.empty()) 
    {
        if (charStack.top() != charQueue.front()) 
        {
            return false;
        }
        charStack.pop();
        charQueue.pop();
    }
    return true;
}

int main() 
{
    cout << "Sonlandirmak istiyorsaniz metin alanina 'son' degerini giriniz." << endl;
    while (true)
    {
        cout << "Bir metin girin: ";
        string userInput;
        getline(cin, userInput);
        if (userInput == "son")
            break;
        if (is_palindrome_deque(userInput) && is_palindrome_stack_queue(userInput)) 
        {
            cout << "Bu metin bir palindrom!" << endl;
        } 
        else 
        {
            cout << "Bu metin bir palindrom degil!" << endl;
        }
    }
    return 0;
}
