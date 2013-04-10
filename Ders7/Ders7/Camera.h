

#ifndef Ders_6_Camera_h
#define Ders_6_Camera_h
#include <windows.h>
#include "glm/glm.hpp"
#include "glm/ext.hpp"
#include "SceneNode.h"

class Camera: public SceneNode{
public:
    Camera():SceneNode(){
        projectionMatrix = glm::perspective(45.0f, 4.0f / 3.0f, 0.1f, 100.f);
    };
    glm::mat4 projectionMatrix;
};


#endif
