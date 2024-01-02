#include <iostream>
#include <chrono>
#include <thread>

int main() {
    std::string girl = R"(
        _____
       '     ' 
     '   o   o   '
    '      |      '
    '    \___/   '
     '          '
       '  _  '
         ||
        /__\
    )";

    // Display each line of the ASCII art with a delay
    for (const auto& line : girl) {
        std::cout << line;
        std::this_thread::sleep_for(std::chrono::milliseconds(100));
    }

    std::cout << std::endl;

    // Delay before displaying the text "Love you, Sara" slowly
    std::this_thread::sleep_for(std::chrono::seconds(1));

    std::string message = "Love you, Sara";
    for (const auto& letter : message) {
        std::cout << letter;
        std::this_thread::sleep_for(std::chrono::milliseconds(200));
    }

    std::cout << std::endl;

    return 0;
}
