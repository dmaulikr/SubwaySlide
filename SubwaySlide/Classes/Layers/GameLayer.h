#import "cocos2d.h"

@interface GameLayer : CCLayer {
@private
  float _accelerometerVelocity;
  BOOL _canChangeSubwayVelocity;
  float _subwayVelocity;
  CCLabelTTF* _subwayVelocityLabel;
}

+ (CCScene*)scene;

@end
