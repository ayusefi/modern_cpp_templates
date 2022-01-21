#include <opencv2/opencv.hpp>
#include "homework_9.h"

void Serialize(const cv::Mat& m, const std::string& filename)
{
  auto [descriptors, image_with_kp] = ComputeSifts(m);

  std::ofstream fs(filename, std::fstream::binary);

  // Header
  int type = descriptors.type();
  int channels = descriptors.channels();
  fs.write((char*)&descriptors.rows, sizeof(int));  // rows
  fs.write((char*)&descriptors.cols, sizeof(int));  // cols
  fs.write((char*)&type, sizeof(int));              // type
  fs.write((char*)&channels, sizeof(int));          // channels

  // Data
  if (descriptors.isContinuous())
  {
    fs.write(descriptors.ptr<char>(0), (descriptors.dataend - descriptors.datastart));
  }
  else
  {
    int rowsz = CV_ELEM_SIZE(type) * descriptors.cols;
    for (int r = 0; r < descriptors.rows; ++r)
    {
      fs.write(descriptors.ptr<char>(r), rowsz);
    }
  }
}

cv::Mat Deserialize(const std::string& filename)
{
  std::ifstream fs(filename, std::fstream::binary);

  // Header
  int rows, cols, type, channels;
  fs.read((char*)&rows, sizeof(int));      // rows
  fs.read((char*)&cols, sizeof(int));      // cols
  fs.read((char*)&type, sizeof(int));      // type
  fs.read((char*)&channels, sizeof(int));  // channels

  // Data
  cv::Mat mat(rows, cols, type);
  fs.read((char*)mat.data, CV_ELEM_SIZE(type) * rows * cols);

  return mat;
}