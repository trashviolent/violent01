#pragma once

#include <string>
#include <cstdint>
#include <SDL.h>
#include <GL/glew.h>
#include <SDL_opengl.h>
#include <gl/glu.h>
#include "shader.h"
#include "texAttribute.h"

class Overhead {
  private:
    SDL_GLContext context;
    SDL_Window* window;
    TexAttribute texAttribute;
    GLuint texture;
    Shader* shader;
    int screenWidth, screenHeight;
  public:
    Overhead(int screenWidth, int screenHeight, std::string programName, uint8_t* screen);
    ~Overhead();
    void render(uint8_t* screen);
};
