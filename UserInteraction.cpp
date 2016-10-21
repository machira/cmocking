//
// Created by Raymond Machira on 10/20/16.
//



#include "UserInteraction.h"

string UserInteraction::getUserString() {
    string s;
    getline(input, s);
    return s;
}

UserInteraction::UserInteraction(basic_istream<char> &input, ostream &output) : input(input),
                                                                                output(output) {

}

void UserInteraction::tellUserSomething(string s) {
    output << s;
}


void UserInteraction::interactWithUser() {
    tellUserSomething("What is the value of X?: ");
    int x = stoi(getUserString());
    tellUserSomething("What is the value of Y?: ");
    int y = stoi(getUserString());
    string answer = to_string(product(x, y));
    tellUserSomething(answer);
}

int UserInteraction::product(int x, int y) {
    return x * y;
}
