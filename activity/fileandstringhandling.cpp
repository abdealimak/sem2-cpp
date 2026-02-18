#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <cctype>

using namespace std;

int countVowels(string text) {
    int count = 0;
    for (char ch : text) {
        ch = tolower(ch);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            count++;
    }
    return count;
}

int countWords(string text) {
    stringstream ss(text);
    string word;
    int count = 0;

    while (ss >> word)
        count++;

    return count;
}

int countNumbers(string text) {
    stringstream ss(text);
    string token;
    int count = 0;

    while (ss >> token) {
        bool isNumber = true;
        for (char ch : token) {
            if (!isdigit(ch)) {
                isNumber = false;
                break;
            }
        }
        if (isNumber)
            count++;
    }
    return count;
}

int searchWord(string text, string key) {
    stringstream ss(text);
    string word;
    int count = 0;

    while (ss >> word) {
        if (word == key)
            count++;
    }

    return count;
}

string replaceWord(string text, string oldWord, string newWord) {
    stringstream ss(text);
    string word, result = "";

    while (ss >> word) {
        if (word == oldWord)
            result += newWord + " ";
        else
            result += word + " ";
    }

    return result;
}

int main() {
    string filename, text = "", line;

    cout << "Enter file name: ";
    cin >> filename;
    cin.ignore();

    cout << "Enter text (type END to stop):\n";
    while (true) {
        getline(cin, line);
        if (line == "END")
            break;
        text += line + "\n";
    }

    ofstream outFile(filename);
    outFile << text;
    outFile.close();

    cout << "\nData written to file successfully!\n";

    cout << "\n---- Analysis ----\n";
    cout << "Total Words: " << countWords(text) << endl;
    cout << "Total Vowels: " << countVowels(text) << endl;
    cout << "Total Numbers: " << countNumbers(text) << endl;

    char searchChoice;
    cout << "\nDo you want to search a word? (y/n): ";
    cin >> searchChoice;
    cin.ignore();

    if (searchChoice == 'y' || searchChoice == 'Y') {
        string key;
        cout << "Enter word to search: ";
        cin >> key;

        int found = searchWord(text, key);

        if (found > 0)
            cout << "Word found " << found << " time(s).\n";
        else
            cout << "Word not found.\n";
    }

    char replaceChoice;
    cout << "\nDo you want to replace a word? (y/n): ";
    cin >> replaceChoice;
    cin.ignore();

    if (replaceChoice == 'y' || replaceChoice == 'Y') {
        string oldWord, newWord;

        cout << "Enter word to replace: ";
        cin >> oldWord;
        cout << "Enter new word: ";
        cin >> newWord;

        text = replaceWord(text, oldWord, newWord);

        ofstream outFile2(filename);
        outFile2 << text;
        outFile2.close();

        cout << "Word replaced successfully!\n";
    }

    ifstream inFile(filename);
    cout << "\n---- File Content ----\n";

    while (getline(inFile, line)) {
        cout << line << endl;
    }

    inFile.close();

    return 0;
}
