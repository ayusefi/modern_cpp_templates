/* 
 *  This is the default license template.
 *  
 *  File: main.cpp
 *  Author: abdullah
 *  Copyright (c) 2022 abdullah
 *  
 *  To edit this license information: Press Ctrl+Shift+P and press 'Create new License Template...'.
 */

#include <opencv2/opencv.hpp>

#include "homework_9.h"

int main()
{
  const std::string img_path = "/home/abdullah/Downloads/images-freiburg-x10/data1/";
  const std::string bin_path = "/home/abdullah/modern_cpp/modern_cpp_templates/homework_9/data/freiburg/bin/";

  // std::cout << "Serializing images... \n";
  // ConvertDataset(img_path);
  // std::cout << "Serializing completed!\n\n";

  std::cout << "Loading serialized binary files...\n";
  std::vector<cv::Mat> loaded_descriptors = LoadDataset(bin_path);
  std::cout << "Loading completed!\n";

  auto& bow_dictionary_instance = BowDictionary::GetInstance();
  std::cout << "BowDictionary object created!\n";

  bow_dictionary_instance.build(40, 5, loaded_descriptors);
  std::cout << "BowDictionary object params has been set!\n";

  if (bow_dictionary_instance.GetInstance().empty())
    std::cout << "BowDictionary object is Empty!" << std::endl;
  else
    std::cout << "BowDictionary object size is: " << bow_dictionary_instance.size() << std::endl;

  bow_dictionary_instance.save_vocabulary("bow_dictionary.bin");
  std::cout << "bow_dictionary saved to bow_dictionary.bin" << std::endl;

  Histogram histogram = Histogram(loaded_descriptors[1], bow_dictionary_instance.vocabulary());
  std::cout << "Histogram Create." << std::endl;

  histogram.WriteToCSV("histogram.csv");
  std::cout << "Histogram saved to histogram.csv" << std::endl;

  return 0;
}