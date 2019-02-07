//
// Created by William Smith on 2019-02-07.
//

#include <iostream>
#include <string>
using namespace std;

int main() {
    string userLine;

    cout << "Enter text:" << endl;
    getline(cin, userLine);
    cout << "You entered: " << userLine << endl;

    userLine.replace(userLine.find("TTYL"), 4, "Talk to you later");
    userLine.replace(userLine.find("IDK"), 3, "I don't know");
    userLine.replace(userLine.find("BFF"), 3, "best friend forever");
    userLine.replace(userLine.find("JK"), 2, "just kidding");
    userLine.replace(userLine.find("TMI"), 3, "too much information");

    cout << "Expanded: " << userLine << endl;


    return 0;
}