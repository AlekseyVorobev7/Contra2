#include <iostream>
#include <string>

using namespace std;


void pl(string name) {
    freopen(name.c_str(), "w", stdout);
    cout << "#include<iostream>\n\nusing namespace std;\n\nint main() {\n    int a,b;\n    cin >> a >> b;\n    cout << a+b;\n}";
}

void ml(string name) {
    freopen(name.c_str(), "w", stdout);
    cout << "#include<iostream>\n\nusing namespace std;\n\nint main() {\n    int a,b;\n    cin >> a >> b;\n    cout << a*b;\n}";
}

int main(int argc, char** argv) {
    string type_p(argv[1]);
    string name(argv[2]);
    if(type_p == "plus")
    {
        pl(name);
    }
    if(type_p == "mult")
    {
        ml(name);
    }
}