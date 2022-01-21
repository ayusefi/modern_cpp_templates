
#pragma once

#include <experimental/filesystem>

void ConvertDataset(const std::experimental::filesystem::path& img_path);
std::vector<cv::Mat> LoadDataset(const std::experimental::filesystem::path& bin_path);