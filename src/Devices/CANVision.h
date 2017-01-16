/*
 * CANVision.h
 */

#ifndef SRC_DEVICES_CANVISION_H_
#define SRC_DEVICES_CANVISION_H_

class CANVision
{
public:
  explicit CANVision(int deviceNumber);
  virtual ~CANVision();

  void EnableTracking();
  void DisableTracking();

  enum Confidence {
      kConfidenceLow = 0    // What target? I don't see a target.
    , kConfidenceMedium = 1 // Oh that target? I can see it but it's not centered well.
    , kConfidenceHigh = 2   // That's the target! Fire!
  };

  /*
   * Return the confidence that the distance can be used for shooting
   */
  Confidence GetConfidence() const;
  int GetDistanceInches() const;

private:
  int m_deviceNumber;
};

#endif /* SRC_DEVICES_CANVISION_H_ */
