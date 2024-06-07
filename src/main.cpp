/*Standard Library*/

#include <iostream>
#include <cstdlib>

 /*Third Party Libraries*/
#include <GL/glew.h>
#include <GLFW/glfw3.h>
#include <glm/glm.hpp>
using namespace glm;


int main(){
    glewExperimental = GL_TRUE; // Required for core profile

    if( !glfwInit() )
    {
      fprintf( stderr, "Failed to initialize GLFW\n" );
      return EXIT_FAILURE;
    }

    glfwWindowHint(GLFW_SAMPLES, 4); // 4x antialiasing
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3); // We want OpenGL 3.3
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE); // To make MacOS happy; should not be needed
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE); // We don't want the old OpenGL

    // Open a window and create its OpenGL context
    GLFWwindow* window;
    window = glfwCreateWindow(1024, 768, "Tutorial 01", nullptr, nullptr);
    if(window == nullptr){
        fprintf( stderr, "Failed to open GLFW window. If you have an Intel GPU, they are not 3.3 compatible\n" );
        glfwTerminate();
        return EXIT_FAILURE;
    }

    glfwMakeContextCurrent(window);
    glewExperimental = true; // Needed in core profile
    if (glewInit() != GLEW_OK) {
        fprintf(stderr, "Failed to initialize GLEW\n");
        return EXIT_FAILURE;
    }

    // Ensure we can capture the escape key being pressed below
    glfwSetInputMode(window, GLFW_STICKY_KEYS, GL_TRUE);

    do{
      // Clear the screen. It's not mentioned before Tutorial 02, but it can cause flickering, so it's there nonetheless.
      glClear( GL_COLOR_BUFFER_BIT );

      // Draw nothing, see you in tutorial 2 !

      // Swap buffers
      glfwSwapBuffers(window);
      glfwPollEvents();

    } // Check if the ESC key was pressed or the window was closed
    while( glfwGetKey(window, GLFW_KEY_ESCAPE ) != GLFW_PRESS &&
        glfwWindowShouldClose(window) == 0 );

    return EXIT_SUCCESS;
}