#include "ImageProcessor.h"
#include <iostream>

int main() {
    ImageProcessor processor;

    if (!processor.loadImage("assets/sample.jpg")) {
        std::cerr << "Failed to load image.\n";
        return 1;
    }

    processor.applyGrayscale();
    processor.applyBlur(5);
    processor.detectEdges();
    processor.showImage("Processed Image");

    processor.saveImage("assets/output.jpg");

    return 0;
}
