#pragma once

// class Histogram
// {
// public:
//   Histogram();
//   Histogram(std::vector<int>& data);
//   Histogram(cv::Mat& descriptors, cv::Mat& dictionary);

//   friend std::ostream& operator<<(std::ostream& out, const Histogram& histogram)
//   {
//     for (const auto& data_point : histogram.data_)
//     {
//       out << data_point << " ";
//     }
//     out << std::endl;
//     return out;
//   }
//   void WriteToCSV(const std::string& filename);
//   void ReadFromCSV(const std::string& filename);

//   // Imitate stl_vector functionality
//   int& operator[](int i)
//   {
//     return data_[i];
//   };
//   int operator[](int i) const
//   {
//     return data_[i];
//   };
//   std::vector<int> data() const
//   {
//     return data_;
//   };
//   int size() const
//   {
//     return data_.size();
//   };
//   bool empty() const
//   {
//     return data_.size() > 0 ? true : false;
//   }
//   std::vector<int>::const_iterator begin() const
//   {
//     return data_.begin();
//   }
//   std::vector<int>::const_iterator cbegin() const
//   {
//     return data_.cbegin();
//   }
//   std::vector<int>::const_iterator end() const
//   {
//     return data_.end();
//   }
//   std::vector<int>::const_iterator cend() const
//   {
//     return data_.cend();
//   }

// private:
//   // data members:
//   std::vector<int> data_;
//   inline static cv::Ptr<cv::DescriptorMatcher> matcher_;
//   inline static std::vector<std::vector<cv::DMatch>> knn_matches;
//   inline static std::ifstream fin = std::ifstream();
//   inline static std::ofstream fout = std::ofstream();
// };