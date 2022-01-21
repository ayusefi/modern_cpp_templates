#pragma once

cv::Mat kMeans(const std::vector<cv::Mat>& descriptors, int k, int max_iter);
