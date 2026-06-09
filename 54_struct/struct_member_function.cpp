#include <iostream>
#include <string>

struct Car {
    std::string model_name;
    std::string brand_name;
    std::string color;
    int current_speed;
    int max_speed;

    // Pakai const jika hanya ingin membaca isi member variabel saja tanpa mengubahnya
    void currentSpeed() const {
        std::cout << "Kecepatan saat ini: " << current_speed << " km/h";
    }

    // Pemisahan deklrasi dan implementasi
    void printInfo() const;
    void accelerate(int speed);
};

int main() {
    Car toyota_avanza = {"Avanza", "Toyota", "White", 0, 150};

    toyota_avanza.printInfo();
    toyota_avanza.accelerate(50);
    std::cout << std::endl;

    toyota_avanza.printInfo();
    toyota_avanza.accelerate(50);
    toyota_avanza.accelerate(50);
    std::cout << std::endl;

    toyota_avanza.printInfo();
    toyota_avanza.accelerate(50);

    return 0;
}

// Implementasi bisa di bagian lain dari file atau di file .cpp terpisah
void Car::printInfo() const {
    std::cout << brand_name << " " << model_name << std::endl;
    std::cout << "Brand        : " << brand_name << std::endl;
    std::cout << "Color        : " << color << std::endl;
    std::cout << "Current Speed: " << current_speed << " km/h" << std::endl;
    std::cout << "Max Speed    : " << max_speed << " km/h" << std::endl;
}

void Car::accelerate(int speed) {
    int updatedSpeed = current_speed + speed;

    if (updatedSpeed > max_speed) {
        std::cout << "Tidak bisa menambah kecepatan lagi!" << std::endl;
        return;
    }

    current_speed = updatedSpeed;
}
