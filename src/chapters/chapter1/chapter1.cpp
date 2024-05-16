#include "GL/gl3w.h"
#include "GL/glcorearb.h"
#include "sb7.h"

class chapter1 : public sb7::application {
public:
  void render(double currentTime) {
    static const GLfloat red[] = {1.0f, 0.0f, 0.0f, 1.0f};
    glClearBufferfv(GL_COLOR, 0, red);
  }
};

DECLARE_MAIN(chapter1);