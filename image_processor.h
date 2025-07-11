#pragma once
#include <opencv2/opencv.hpp>
#include <string>

class ImageProcessor {
public:
    bool loadImage(const std::string& path);
    bool saveImage(const std::string& path);
    void applyGrayscale();
    void applyBlur(int kernelSize);
    void detectEdges();

    void showImage(const std::string& windowName);

private:
    cv::Mat image;
};
