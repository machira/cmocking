#include <iostream>
#include "UserInteraction.h"

using namespace std;

void testMe() {
    UserInteraction c(cin, cout);
    c.tellUserSomething("What is the value of X?: ");
    int x = stoi(c.getUserString());
    c.tellUserSomething("What is the value of Y?: ");
    int y = stoi(c.getUserString());
    string answer = to_string(x * y);
    c.tellUserSomething(answer);

}


int main() {
    testMe();
    return 0;
}

