//
// Created by rudri on 10/11/2020.
//

#ifndef PROG3_FUNDAMENTOS_TASK_1_V2026_2_P10_H
#define PROG3_FUNDAMENTOS_TASK_1_V2026_2_P10_H
#include <cstddef>

class GrayImage {
    unsigned char* pixels_;
    std::size_t width_;
    std::size_t height_;
public:
    GrayImage(std::size_t width, std::size_t height);
    GrayImage(GrayImage&& other) noexcept;
    GrayImage& operator=(GrayImage&& other) noexcept;
    GrayImage inverted() const;
    unsigned char& at(std::size_t row, std::size_t column);
    unsigned char at(std::size_t row, std::size_t column) const; // given
    bool empty() const; // given
};

#endif //PROG3_FUNDAMENTOS_TASK_1_V2026_2_P10_H
