#include <iostream>
#include <string>

using namespace std;

class Smartphone {
private:
    string brandName;
    string modelName;
    int displayResolution;
    int memorySizeRAM;
    int memorySizeROM;
    int internalStorage;

public:
    Smartphone(string brand, string model, int resolution, int ram, int rom, int storage)
        : brandName(brand), modelName(model), displayResolution(resolution), memorySizeRAM(ram), memorySizeROM(rom), internalStorage(storage) {}

    string getBrandName() const {
        return brandName;
    }
    string getModelName() const {
        return modelName;
    }
    int getDisplayResolution() const {
        return displayResolution;
    }
    int getMemorySizeRAM() const {
        return memorySizeRAM;
    }
    int getMemorySizeROM() const {
        return memorySizeROM;
    }
    int getInternalStorage() const {
        return internalStorage;
    }

    // Additional functionality methods
    void makePhoneCall(string contact) const {
        cout<< "Making a call to "<< contact<<endl;
    }

    void sendMessage(string recipient) const {
        cout<< "Sending a message to "<< recipient<<endl;
    }

    void connectToWiFi(string networkName) const {
        cout<< "Connecting to WiFi network "<< networkName<<endl;
    }

    void browseInternet(string website) const {
        cout<< "Browsing "<< website<<endl;
    }
};

int main() {
    // Creating smartphone objects using constructor
    Smartphone samsung("Samsung", "Galaxy S21", 2400, 8, 256, 512);
    Smartphone apple("Apple", "iPhone 13", 2532, 6, 128, 256);

    // Displaying attributes and performing actions for Samsung
    cout<< "Samsung Attributes:"<<endl;
    cout<< "Brand: "<< samsung.getBrandName()<<endl;
    cout<< "Model: "<< samsung.getModelName()<<endl;
    cout<< "Display Resolution: "<< samsung.getDisplayResolution()<<endl;
    cout<< "RAM: "<< samsung.getMemorySizeRAM() << " GB"<<endl;
    cout<< "ROM: "<< samsung.getMemorySizeROM() << " GB"<<endl;
    cout<< "Internal Storage: "<< samsung.getInternalStorage()<< " GB" <<endl;
    samsung.makePhoneCall("Cristiano");
    samsung.sendMessage("Ronaldo");
    samsung.connectToWiFi("HomeNetwork");
    samsung.browseInternet("YouTube");

    cout << endl;

    // Displaying attributes and performing actions for Apple
    cout<< "Apple Attributes:"<<endl;
    cout<< "Brand: "<< apple.getBrandName()<<endl;
    cout<< "Model: "<< apple.getModelName()<<endl;
    cout<< "Display Resolution: "<<apple.getDisplayResolution()<<endl;
    cout<< "RAM: "<< apple.getMemorySizeRAM()<< " GB"<< endl;
    cout<< "ROM: "<< apple.getMemorySizeROM()<< " GB"<< endl;
    cout<< "Internal Storage: "<<apple.getInternalStorage()<< " GB" <<endl;
    apple.makePhoneCall("Abdullah");
    apple.sendMessage("Messi");
    apple.connectToWiFi("Optix");
    apple.browseInternet("Facebook");

    return 0;
}
