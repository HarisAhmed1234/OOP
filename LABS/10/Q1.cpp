#include <iostream>
#include <string>

class Logo {
private:
    std::string img;

    friend class Platform;

public:
    Logo() : img("Blue Bird") {}

    void setImg(std::string newImg) {
        img = newImg;
    }

    void display() {
        std::cout << "Logo: " << img << std::endl;
    }
};

class Platform {
private:
    Logo graphic;

public:
    Platform() : graphic() {}

    void display() {
        std::cout << "Platform: Twitter" << std::endl;
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
        std::cout << "Server: CPP" << std::endl;
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
