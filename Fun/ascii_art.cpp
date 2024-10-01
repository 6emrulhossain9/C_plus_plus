#include <iostream>
#include <vector>
#include <fstream>
#include <string>

using namespace std;

class ASCIIArtEditor {
private:
    vector<string> canvas; // 2D grid for drawing
    int width, height;     // dimensions of the canvas

public:
    ASCIIArtEditor(int w, int h) : width(w), height(h) {
        canvas.resize(height, string(width, ' ')); // Initialize canvas with spaces
    }

    void displayCanvas() {
        for (const auto& row : canvas) {
            cout << row << endl;
        }
    }

    void draw(int x, int y, char ch) {
        if (x >= 0 && x < width && y >= 0 && y < height) {
            canvas[y][x] = ch; // Draw character on canvas
        }
    }

    void erase(int x, int y) {
        draw(x, y, ' '); // Erase by drawing a space
    }

    void saveToFile(const string& filename) {
        ofstream outFile(filename);
        if (outFile) {
            for (const auto& row : canvas) {
                outFile << row << endl;
            }
            cout << "Artwork saved to " << filename << endl;
        } else {
            cerr << "Error saving file." << endl;
        }
    }

    void loadFromFile(const string& filename) {
        ifstream inFile(filename);
        if (inFile) {
            string line;
            canvas.clear();
            while (getline(inFile, line) && canvas.size() < height) {
                canvas.push_back(line);
            }
            cout << "Artwork loaded from " << filename << endl;
        } else {
            cerr << "Error loading file." << endl;
        }
    }
};

int main() {
    ASCIIArtEditor editor(20, 10); // Create an editor with 20x10 canvas
    char command;
    int x, y;
    char ch;

    while (true) {
        cout << "Commands: d (draw), e (erase), s (save), l (load), q (quit)" << endl;
        cout << "Enter command: ";
        cin >> command;

        switch (command) {
            case 'd': // Draw
                cout << "Enter x, y coordinates and character: ";
                cin >> x >> y >> ch;
                editor.draw(x, y, ch);
                editor.displayCanvas();
                break;

            case 'e': // Erase
                cout << "Enter x, y coordinates to erase: ";
                cin >> x >> y;
                editor.erase(x, y);
                editor.displayCanvas();
                break;

            case 's': // Save
                editor.saveToFile("artwork.txt");
                break;

            case 'l': // Load
                editor.loadFromFile("artwork.txt");
                editor.displayCanvas();
                break;

            case 'q': // Quit
                return 0;

            default:
                cout << "Unknown command." << endl;
                break;
        }
    }

    return 0;
}
