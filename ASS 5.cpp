#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string toLower(string str) {
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    return str;
}

int main() {
    string name;
    cout << "Hello! What's your name?" << endl;
    getline(cin, name);

    cout << "Nice to meet you, " << name << "! How can I assist you today?" << endl;

    string response;
    while (true) {
        cout << "> ";
        getline(cin, response);
        response = toLower(response);

        switch (response[0]) {
            case 'h':
                cout << "I am Fine!" << endl;
                break;
            case 'b':
                cout << "Goodbye! Have a nice day." << endl;
                return 0;
            case 'n':
                cout << "My name is Chatbot. Nice to meet you!" << endl;
                break;
            case 'w':
                cout << "Someshwarnagar tal-baramati dist-pune " << endl;
                break;
            case 'm':
                cout << "Artificial Intelligence" << endl;
                break;
            case 'a':
                cout << "10 acres" << endl;
                break;
            case 'd':
                cout << "Computer Civil Mechanical Electrical" << endl;
                break;
            case 'p':
                cout << "Sanjay Deokar" << endl;
                break;
            default:
                cout << "I'm sorry, I didn't understand. Can you please rephrase your question?" << endl;
        }
    }

    return 0;
}
