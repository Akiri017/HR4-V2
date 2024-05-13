    #include <iostream>
    #include <string>
    #include <sstream>
    #include <algorithm>

    void highest(int a, int b, int c, int d);

    int main() {
        int i1, i2, i3, i4;
        std::string s;

        for (int i = 1; i <= 4; ++i) {
            std::cout << "Enter integer " << i << ": ";
            std::getline(std::cin, s);

            // Check if the input is empty or contains non-digit characters
            if (s.empty() || !std::all_of(s.begin(), s.end(), ::isdigit)) {
                system("CLS");
                std::cout << "Please enter an integer only.\n" << std::endl;
                --i; // Decrement i to repeat the same iteration
                continue;
            }

            // Convert string to integer
            std::istringstream iss(s);
            iss >> (i == 1 ? i1 : (i == 2 ? i2 : (i == 3 ? i3 : i4)));

            if (iss.fail()) {
                system("CLS");
                std::cout << "Please enter an integer only.\n" << std::endl;
                --i; // Decrement i to repeat the same iteration
                continue;
            }

            system("CLS");
        }

        // Now you have i1, i2, i3, i4 with valid integer values
        // You can use them as needed
        std::cout << "The integers you've entered are " << i1 << ", " << i2 << ", " << i3 << ", " << i4 <<".\n"<< std::endl;

        highest(i1, i2, i3, i4);

        return 0;
    }

    void highest(int a, int b, int c, int d) {
        int result = std::max({ a, b, c, d });

        std::cout << "The highest integer you've entered is " << result << ".\n";
    }