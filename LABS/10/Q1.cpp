#include <iostream>
#include <string>

using namespace std;

class Logo {
private:
    string img;

    friend class Platform;

public:
    Logo() : img("Blue Bird") {}

    void setImg(string newImg) {
        img = newImg;
    }

    void display() {
        cout << "Logo: " << img << endl;
    }
};

class Platform {
private:
    Logo graphic;

public:
    Platform() : graphic() {}

    void display() {
        cout << "Platform: Twitter" << endl;
        graphic.display();
    }

    void setImg(Logo& newImg) {
        graphic = newImg;
    }
};

class Server {
private:
    Platform plat;

public:
    Server() : plat() {}

    void display() {
        cout << "Server: CPP" << endl;
        plat.display();
    }
};

int main() {
    Server svr;
    svr.display();

    Logo newImg;
    newImg.setImg("Doge Coin");

    Platform newPlat;
    newPlat.setImg(newImg);

    Server modSvr;
    modSvr.display();

    return 0;
}
