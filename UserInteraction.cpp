//
// Created by Raymond Machira on 10/20/16.
//



#include "UserInteraction.h"

string UserInteraction::getUserString() {
    string s;
    getline(input, s);
    return s;
}


void UserInteraction::tellUserSomething(string s) {
    output << s;
}

UserInteraction::UserInteraction(basic_istream<char> &input, ostream &output) : input(input),
                                                                                output(output) {

}
