#pragma once

#include <algorithm>
#include <chrono>
#include <convert_dataset.hpp>
#include <ctime>
#include <execution>
#include <functional>
#include <iostream>
#include <opencv2/core.hpp>
#include <opencv2/core/mat.hpp>
#include <serialize.hpp>
#include <string>
#include <thread>
#include <vector>

class BowDictionary
{
private:
  BowDictionary() = default;
  ~BowDictionary() = default;

public:
  BowDictionary(const BowDictionary&) = delete;
  void operator=(const BowDictionary&) = delete;
  BowDictionary(const BowDictionary&&) = delete;
  void operator=(const BowDictionary&&) = delete;

  static BowDictionary& GetInstance();

private:
  //   int max_iter_;
  //   int dict_size_;
  //   std::vector<cv::Mat> descriptors_;
  cv::Mat computed_dictionary_;

public:
  // Getters methods
  //   int max_iterations();
  int size();  // number of centroids / codewords
  //   std::vector<cv::Mat> descriptors();
  cv::Mat vocabulary();
  //   cv::Mat& vocabulary();
  //   int total_features();  // number of input features
  bool empty();

  // Setters methods
  //   void set_max_iterations(int new_max_iter);
  //   void set_size(int new_dict_size);
  //   void set_descriptors(std::vector<cv::Mat> new_descriptors);
  void build(int iter, int dict_size, const std::vector<cv::Mat>& descriptors);
  void set_vocabulary(cv::Mat computed_vocabulary);
};