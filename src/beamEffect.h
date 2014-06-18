#ifndef BEAM_EFFECT_H
#define BEAM_EFFECT_H

#include "spaceObject.h"

class BeamEffect : public SpaceObject, public Updatable
{
    float lifetime;
    int32_t sourceId;
    int32_t targetId;
    sf::Vector3f sourceOffset;
    sf::Vector3f targetOffset;
    sf::Vector2f targetLocation;
public:
    BeamEffect();

    virtual void draw3DTransparent();
    virtual void drawRadar(sf::RenderTarget& window, sf::Vector2f position, float scale);
    virtual void update(float delta);
    
    void setSource(P<SpaceObject> source, sf::Vector3f offset);
    void setTarget(P<SpaceObject> target, sf::Vector2f hitLocation);
};

#endif//BEAM_EFFECT_H
