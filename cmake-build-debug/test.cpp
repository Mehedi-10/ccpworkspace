#include <bits/stdc++.h>

using namespace std;
#define have_tc 1

int main(int cnt = 0) {

    try {
        system("g++ -o zgf gf.cpp");
        system("zgf.exe");
        system("g++ -o main main.cpp");

        system("main.exe");
        system("g++ -o zbf bf.cpp");
        system("zbf.exe");

        ifstream out("output.txt"), crout("correctoutput.txt"), in("input.txt");
        string str,str1,sss;
        int x=0;
        while (getline(crout,str))
        {
            getline(out,str1);
            x++;
            if(str!=str1)
            {
                cout<<"Not Identical Line "<<x<<endl;
                if(have_tc)
                    getline(in,sss);

                /* taking input */
                for (int i = 0; i < 2*x; ++i) {
                    getline(in,sss);
                }
                cout<<sss<<endl;
                getline(in,sss);
                cout<<sss<<endl;
                cout<<str<<endl;
                cout<<str1<<endl;

                return 0;
            }
        }
    } catch (const exception &ex) {
        cerr << ex.what() << endl;
        return 0;
    }

    if (cnt < 3)
        main(cnt + 1);

    return 0;
}

