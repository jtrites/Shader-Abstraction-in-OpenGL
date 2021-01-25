/* Vid13: contains definitions declared in Renderer.h */

#include "Renderer.h"
#include <iostream>

void GLClearErrors()
{
    /* loop while there are errors and until GL_NO_ERROR is returned */
    while (glGetError() != GL_NO_ERROR);
}

/* Vid10:  GLLogCall() static function that returns a bool and accepts parameters that allow the console
    to printout the C++ source file, the line of code, and the function name that errored */

bool GLLogCall(const char* function, const char* file, int line)
{
    while (GLenum error = glGetError())
    {
        std::cout << "[OpenGL Error] (" << error << ") " << function
            << " " << file << ": " << line << std::endl;
        return false;
    }

    return true;
}


