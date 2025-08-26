#include <iostream>
#include <conio.h>  // for _getch() on Windows

int main() {
    std::cout << "Keyboard Test Program\n";
    std::cout << "Press any key (ESC to exit)...\n";

    while (true) {
        int key = _getch();  // read key without Enter

        if (key == 27) {  // ESC key
            std::cout << "\nExiting...\n";
            break;
        }

        std::cout << "You pressed: " << key 
                  << " (char: " << static_cast<char>(key) << ")\n";
    }

    return 0;
}
