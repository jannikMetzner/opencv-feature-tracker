#ifndef __BLOB_FEATURE_H
#define __BLOB_FEATURE_H
#include <cv.h>
#include "feature.h"

/** \class BlobDescriptorExtractor
  Extract feature from blobs. Blobs are converted to cv::Keypoint
  (thus losing some information)

  \todo Due to the way emd.h define feature_t, we are rather constraint
 */
class BlobDescriptorExtractor : public DescriptorExtractor
{
public:
    cv::Mat blob_mean_color(const cv::Mat & image, const cv::KeyPoint & keypoint);
    void compute(const cv::Mat& image,
                 std::vector<cv::KeyPoint>& keypoints,
                 cv::Mat& descriptors);
private:

};

float blob_distance(const float * feature1, const float * feature2, void * user_data);


#endif
