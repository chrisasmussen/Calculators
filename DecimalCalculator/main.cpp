//
//  main.cpp
//  DecimalCalculator
//
//  Created by Christopher on 3/7/18.
//  Copyright © 2018 Chris Asmussen. All rights reserved.
//

#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

int main(int argc, const char * argv[]) {
    try {
        string number = (string)argv[1];
        int total = int(number.length()), sum = 0, exp = total;
        for (int x = 0; x < total; x++)
        {
            exp--;
            string temp = number.substr(x,1);
            if(temp == "1")
                sum += pow(2, exp);
        }
        cout << sum << endl;
    } catch (exception) {
        cout << "Invalid input..." << endl;
    }
}
