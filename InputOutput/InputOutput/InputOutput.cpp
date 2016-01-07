//
//  InputOutput.cpp
//  InputOutput
//
//  Created by Philip Seger on 1/6/16.
//  Copyright © 2016 Philip Seger. All rights reserved.
//

#include <stdio.h>
#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    cout << "Enter a number: ";
    int x = 0;
    cin >> x;
    cout << "You entered " << x << "\n";
    return 0;
}