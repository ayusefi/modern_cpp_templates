#include <opencv2/opencv.hpp>

#include "homework_9.h"

BowDictionary& BowDictionary::GetInstance()
{
  static BowDictionary instance;
  return instance;
}

// Getters methods
// int BowDictionary::max_iterations()
// {
//   return max_iter_;
// }
int BowDictionary::size()
{
  return computed_dictionary_.rows;
}
// std::vector<cv::Mat> BowDictionary::descriptors()
// {
//   return descriptors_;
// }
cv::Mat BowDictionary::vocabulary()
{
  return computed_dictionary_;
}

// cv::Mat BowDictionary::&vocabulary()
// {
//   return computed_dictionary_;
// };
// int BowDictionary::total_features()
// {
//   int total_features = 0;
//   for (const auto& descriptor : descriptors_)
//   {
//     total_features += descriptor.rows;
//   }
//   return total_features;
// }
bool BowDictionary::empty()
{
  return computed_dictionary_.empty();
}

// Setters methods
// void BowDictionary::set_max_iterations(int new_max_iter)
// {
//   max_iter_ = new_max_iter;
// }
// void BowDictionary::set_size(int new_dict_size)
// {
//   dict_size_ = new_dict_size;
// }
// void BowDictionary::set_descriptors(std::vector<cv::Mat> new_descriptors)
// {
//   descriptors_ = new_descriptors;
// }

void BowDictionary::build(int iter, int dict_size, const std::vector<cv::Mat>& descriptors)
{
  computed_dictionary_ = kMeans(descriptors, dict_size, iter);
}

void BowDictionary::set_vocabulary(cv::Mat computed_vocabulary)
{
  computed_dictionary_ = computed_vocabulary;
}