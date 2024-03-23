#include <iostream>
#include <ctime> // for srand

using namespace std;

class image {
private:
    int width;
    int height;
    int* image_data;

public:
    image(int widtth, int heigght, const int* imagData) : width(widtth), height(heigght) {
        image_data = new int[widtth * heigght];
        for (int i = 0; i < width * height; i++) {
            image_data[i] = imagData[i];
        }
    }

    image(const image& other) : width(other.width), height(other.height) {
        image_data = new int[width * height];
        for (int i = 0; i < width * height; i++) {
            image_data[i] = other.image_data[i];
        }
    }

    ~image() {
        delete[] image_data;
    }

    void display() const {
        cout << "image Data:\n";
        for (int i = 0; i < height; i++) {
            for (int j = 0; j < width; j++) {
                cout << image_data[i * width + j] << " ";
            }
            cout << endl;
        }
        cout << endl;
    }

    void updateData() {
        srand(time(NULL)); // Seed the random number generator
        for (int i = 0; i < width * height; i++) {
            if (image_data[i] <= 0) {
                image_data[i] = rand() % 255 + 1;
            }
        }
    }
};

int main() {
    cout<<"-Haris Ahmed BsAi 23k6005-"<<endl;
    cout<<endl;
    int imgdata[6] = {1, -2, 3, -4, 5, 6};

    image original(2, 3, imgdata);
    image copy(original);

    cout << "Original image:\n";
    original.display();

    cout << "Copied image:\n";
    copy.display();

    original.updateData();
    copy.updateData();

    cout << "after updating data:\n";
    cout << "Original Image:\n";
    original.display();

    cout << "copied Image:\n";
    copy.display();

    return 0;
}
