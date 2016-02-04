#include "ofxForce.h"

class ofxOrbitalForce : public ofxForce {
public:
	ofxOrbitalForce(float f);
	~ofxOrbitalForce();
	void apply(std::shared_ptr<ofxParticle> p);
	pfVec3 getPosition();
	void setPosition(float x, float y, float z);
	void setMinDistance(float distance);
	void setMaxDistance(float distance);
protected:
	pfVec3 mPosition;
	float mMinDistance;
	float mMinDistanceSq;
	float mMaxDistance;
	float mMaxDistanceSq;
	float mVeryFarAway;
};