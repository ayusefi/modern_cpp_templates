/* 
 *  This is the default license template.
 *  
 *  File: histogram.cpp
 *  Author: abdullah
 *  Copyright (c) 2022 abdullah
 *  
 *  To edit this license information: Press Ctrl+Shift+P and press 'Create new License Template...'.
 */

#include "homework_9.h"

// Histogram::Histogram(std::vector<int>& data)
// {
//   matcher_ = cv::DescriptorMatcher::create(cv::DescriptorMatcher::FLANNBASED);
//   data_ = data;
// }

// Histogram::Histogram(cv::Mat& descriptors, cv::Mat& dictionary)
// {
//   matcher_ = cv::DescriptorMatcher::create(cv::DescriptorMatcher::FLANNBASED);
//   knn_matches.clear();
//   matcher_->knnMatch(descriptors, dictionary, knn_matches, 1);
//   data_.resize(dictionary.rows);
//   for (const auto& match : knn_matches)
//   {
//     data_[match[0].trainIdx]++;
//   }
// }

// void Histogram::WriteToCSV(const std::string& filename)
// {
//   fout.open(filename);
//   for (const auto& element : data_)
//   {
//     fout << element << ",";
//   }
//   fout.close();
// }

// void Histogram::ReadFromCSV(const std::string& filename)
// {
//   fin.open(filename);
//   if (fin.is_open())
//   {
//     std::string csv_value;
//     while (std::getline(fin, csv_value, ','))
//     {
//       data_.emplace_back(stoi(csv_value));
//     }
//     fin.close();
//   }
//   else
//   {
//     std::cerr << "Could not open file " << filename << std::endl;
//     fin.close();
//   }
// }