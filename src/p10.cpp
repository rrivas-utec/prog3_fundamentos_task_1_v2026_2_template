//
// Created by rudri on 10/11/2020.
//

#include <iostream>
#include "p10.h"

GrayImage::GrayImage(std::size_t width, std::size_t height) {
}

GrayImage::GrayImage(GrayImage&& other) noexcept {
}

GrayImage& GrayImage::operator=(GrayImage&& other) noexcept {
}

GrayImage GrayImage::inverted() const {
}

unsigned char& GrayImage::at(std::size_t row, std::size_t column) {
}

unsigned char GrayImage::at(std::size_t row, std::size_t column) const {
}

bool GrayImage::empty() const {
}
