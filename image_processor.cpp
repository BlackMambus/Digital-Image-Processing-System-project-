#include "ImageProcessor.h"

bool ImageProcessor::loadImage(const std::string& path) {
    image = cv::imread(path);
    return !image.empty();
}

bool ImageProcessor::saveImage(const std::string& path) {
    return cv::imwrite(path, image);
}

void ImageProcessor::applyGrayscale() {
    cv::cvtColor(image, image, cv::COLOR_BGR2GRAY);
}

void ImageProcessor::applyBlur(int kernelSize) {
    cv::GaussianBlur(image, image, cv::Size(kernelSize, kernelSize), 0);
}

void ImageProcessor::detectEdges() {
    cv::Canny(image, image, 100, 200);
}

void ImageProcessor::showImage(const std::string& windowName) {
    cv::imshow(windowName, image);
    cv::waitKey(0);
}
