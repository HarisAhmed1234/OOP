#include <iostream>
#include <string>
using namespace std;

class ValidateString {
private:
    string inputString;
    bool isValid;

public:
    ValidateString(string str) {
        inputString =str;
        isValid =true;
    }

    void validate() {
        for (int i =0; i<inputString.length();i++) {
            if (!(inputString[i] >='a' && inputString[i]<= 'z') && !(inputString[i]>= 'A'&&inputString[i] <='Z')) {
                isValid=false;
            break;
            }
        }

        if (isValid) {
            cout<<"Valid word"<< endl;
        } else {
            cout <<"Invalid word"<< endl;
        }
    }
};

int main() {
    ValidateString obj("hari5");
    obj.validate();

    ValidateString obj1("muhammad");
    obj1.validate();

    ValidateString obj2("yo456");
    obj2.validate();

    return 0;
}
