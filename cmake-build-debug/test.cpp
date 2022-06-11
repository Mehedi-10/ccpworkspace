#include <stdlib.h>
#include <fstream>
#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <vector>
#include <bitset>

using namespace std;

void getans(ifstream &x, vector<string> &vc) {
    string str, word;

    while (getline(x, str)) {
        stringstream ss(str);
        while (ss >> word)
            vc.emplace_back(word);
    }

}

int main() {
    system("g++ -o zgf gf.cpp");
    system("zgf.exe");

    system("g++ -o main main.cpp");
    system("main.exe");

    system("g++ -o zbf bf.cpp");
    system("zbf.exe");

    try {
        ifstream in1("output.txt"), in2("correctoutput.txt"), in3("input.txt");
        vector<string> vc1, vc2;
        getans(in1, vc1);
        getans(in2, vc2);
        bitset<100007> iswa;
        bool ok = 1;
        for (int i = 0; i < vc1.size(); ++i) {
            if (vc1[i] != vc2[i]) {
                iswa[i] = 1;
                ok = 0;
            }
        }
        if (!ok) {
            string str;
            int tc = 100;
            getline(in3, str);
            for (int i = 0, j = 0; i < 2 * tc; ++i) {
                getline(in3, str);
                if (iswa[i/2]) {
                    cout<<str<<endl;
                    if(i%2==1)
                    {
                        cout<<"ans= "<<vc2[i/2]<<" my="<<vc1[i/2]<<endl;
                    }
                }
            }
        }


    } catch (const exception &ex) {
        cerr << ex.what() << endl;
    }

    return 0;
}

