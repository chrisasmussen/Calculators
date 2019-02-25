//
//  main.cpp
//  BinaryCalculator
//
//  Created by Christopher on 3/7/18.
//  Copyright © 2018 Chris Asmussen. All rights reserved.
//

#include <iostream>
#include <stack>
using namespace std;

int main(int argc, const char * argv[]) {
    try {
        int number = stoi(argv[1]);
        stack<int> binary;
        while (number > 1)
        {
            binary.push(number%2);
            number/=2;
        }
        binary.push(number%2);
        cout << "0b";
        while(!binary.empty())
        {
            cout << binary.top();
            binary.pop();
        }
        cout << endl;
    } catch (exception) {
        cout << "Invalid input..." << endl;
    }
}
