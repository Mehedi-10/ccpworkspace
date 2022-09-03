#include <bits/stdc++.h>

using namespace std;

void getans(ifstream &x, vector<string> &vc) {
    string str, word;
    while (getline(x, str)) {
            vc.emplace_back(str);
    }

}

int main(int cnt = 0) {

//    try {
        system("g++ -o zgf gf.cpp");
        system("zgf.exe");
        system("g++ -o main main.cpp");
        //system("g++ -DMDBG -o main main.cpp");

        system("main.exe");

        system("g++ -o zbf bf.cpp");
        system("zbf.exe");

        ifstream out("output.txt"), crout("correctoutput.txt"), in("input.txt");
        string str,str1;
        while (crout>>str)
        {
            out>>str1;
            if(str!=str1)
                cout<<"hi"<<endl;
        }
//        vector<string> vc1, vc2;
//        getans(out, vc1);
//        getans(crout, vc2);
//        int lim = max(vc1.size(), vc2.size());
//        int inp_startsfrom = 1, inpsize=2, acsize = 1;
//        // if input line is fixed then linesoerN is false
//        bool linesperN = 0;
//        for (int i = 0; i < lim; ++i) {
//            if (vc1[i] != vc2[i]) {
//                i/=acsize;
//                cout<<"wa at = "<<i<<endl;
//                string str;
//                for (int j = 0; j < inp_startsfrom; ++j) {
//                    getline(in, str);
//                    cout << "cases: " << str << endl;
//                }
//                for (int j = inp_startsfrom; j <= i; ++j) {
//                    /* here input size */
////                    cout<<"n = "<<str<<endl;
//                    if (linesperN) {
//                        getline(in, str);
//                        inpsize = stoll(str);
//                    }
//                    for (int k = 0; k < inpsize; ++k) {
//                        getline(in, str);
////                        cout<<str<<endl;
//                    }
////                    cout<<endl;
//                }
//
//                /* wrong ans case starts here */
//                if (linesperN) {
//                    getline(in, str);
//                    inpsize = stoll(str);
//                    cout << str << endl;
//                }
//                for (int j = 0; j < inpsize; ++j) {
//                    getline(in, str);
//                    cout << str << endl;
//                }
//                /* ends here */
//
//                cout << "CORRECT OUTPUT" << endl;
//                for (int j = 0; j < acsize; ++j) {
//                    cout << vc2[j + i*acsize] << endl;
//                }
//                cout << "YOURS" << endl;
//                for (int j = 0; j < acsize; ++j) {
//                    cout << vc1[j + i*acsize] << endl;
//                }
//                cout << endl;
//
//                return 0;
//            }
//        }
//
//
//    } catch (const exception &ex) {
//
//        cerr << ex.what() << endl;
//        return 0;
//    }
//
//    if (cnt < 3)
//        main(cnt + 1);

    return 0;
}

