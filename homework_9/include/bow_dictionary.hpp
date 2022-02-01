#pragma once

#include <algorithm>
#include <chrono>
#include <convert_dataset.hpp>
#include <ctime>
// #include <execution>
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
  cv::Mat vocabulary() const
  {
    return computed_dictionary_;
  };
  cv::Mat& vocabulary()
  {
    return computed_dictionary_;
  };
  //   cv::Mat& vocabulary();
  //   int total_features();  // number of input features
  bool empty();

  // Setters methods
  //   void set_max_iterations(int new_max_iter);
  //   void set_size(int new_dict_size);
  //   void set_descriptors(std::vector<cv::Mat> new_descriptors);
  void build(int iter, int dict_size, const std::vector<cv::Mat>& descriptors);
  void set_vocabulary(cv::Mat computed_vocabulary);
  void save_vocabulary(const std::string& filename);
};

class Histogram
{
public:
  Histogram();
  Histogram(std::vector<int>& data);
  Histogram(cv::Mat& descriptors, cv::Mat& dictionary);

  friend std::ostream& operator<<(std::ostream& out, const Histogram& histogram)
  {
    for (const auto& data_point : histogram.data_)
    {
      out << data_point << " ";
    }
    out << std::endl;
    return out;
  }
  void WriteToCSV(const std::string& filename);
  void ReadFromCSV(const std::string& filename);

  // Imitate stl_vector functionality
  int& operator[](int i)
  {
    return data_[i];
  };
  int operator[](int i) const
  {
    return data_[i];
  };
  std::vector<int> data() const
  {
    return data_;
  };
  int size() const
  {
    return data_.size();
  };
  bool empty() const
  {
    return data_.size() > 0 ? true : false;
  }
  std::vector<int>::const_iterator begin() const
  {
    return data_.begin();
  }
  std::vector<int>::const_iterator cbegin() const
  {
    return data_.cbegin();
  }
  std::vector<int>::const_iterator end() const
  {
    return data_.end();
  }
  std::vector<int>::const_iterator cend() const
  {
    return data_.cend();
  }

private:
  // data members:
  std::vector<int> data_;
  inline static cv::Ptr<cv::DescriptorMatcher> matcher_;
  inline static std::vector<std::vector<cv::DMatch>> knn_matches;
  inline static std::ifstream fin = std::ifstream();
  inline static std::ofstream fout = std::ofstream();
};