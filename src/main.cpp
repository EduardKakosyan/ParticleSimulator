/* Standard Library */
#include <iostream>
#include <cstdlib>

/* Third Party Libraries */
#include <GL/glew.h>
#include <GLFW/glfw3.h>
GLFWwindow* window;
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <shader.hpp>
using namespace glm;

int main(){
    // Initialize GLFW
    if( !glfwInit() )
    {
        fprintf( stderr, "Failed to initialize GLFW\n" );
        getchar();
        return -1;
    }

    glfwWindowHint(GLFW_SAMPLES, 4);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE); // To make macOS happy; should not be needed
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);

    // Open a window and create its OpenGL context
    window = glfwCreateWindow( 1024, 768, "Red Rectangle", nullptr, nullptr);
    if( window == nullptr ){
        fprintf( stderr, "Failed to open GLFW window. If you have an Intel GPU, they are not 3.3 compatible. Try the 2.1 version of the tutorials.\n" );
        getchar();
        glfwTerminate();
        return -1;
    }
    glfwMakeContextCurrent(window);

    // Initialize GLEW
    glewExperimental = true; // Needed for core profile
    if (glewInit() != GLEW_OK) {
        fprintf(stderr, "Failed to initialize GLEW\n");
        getchar();
        glfwTerminate();
        return -1;
    }

    // Ensure we can capture the escape key being pressed below
    glfwSetInputMode(window, GLFW_STICKY_KEYS, GL_TRUE);

    // Dark blue background
    glClearColor(0.0f, 0.0f, 0.4f, 0.0f);

    GLuint VertexArrayID;
    glGenVertexArrays(1, &VertexArrayID);
    glBindVertexArray(VertexArrayID);

    // Create and compile our GLSL program from the shaders
    GLuint programID = LoadShaders( "../src/SimpleVertexShader.vertexshader", "../src/SimpleFragmentShader.fragmentshader" );

    // Define the vertices and indices for the rectangle
    static const GLfloat g_vertex_buffer_data[] = {
            -1.0f, -1.0f, 0.0f,  // Bottom left
            1.0f, -1.0f, 0.0f,  // Bottom right
            1.0f,  1.0f, 0.0f,  // Top right
            -1.0f,  1.0f, 0.0f   // Top left
    };

    static const GLuint g_element_buffer_data[] = {
            0, 1, 2,  // First Triangle
            2, 3, 0   // Second Triangle
    };

    GLuint vertexbuffer;
    glGenBuffers(1, &vertexbuffer);
    glBindBuffer(GL_ARRAY_BUFFER, vertexbuffer);
    glBufferData(GL_ARRAY_BUFFER, sizeof(g_vertex_buffer_data), g_vertex_buffer_data, GL_STATIC_DRAW);

    GLuint elementbuffer;
    glGenBuffers(1, &elementbuffer);
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, elementbuffer);
    glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(g_element_buffer_data), g_element_buffer_data, GL_STATIC_DRAW);

    glm::mat4 Projection = glm::ortho(-2.0f, 2.0f, -2.0f, 2.0f, 0.1f, 100.0f);
    glm::mat4 View = glm::lookAt(
            glm::vec3(0, 0, 5), // Camera is at (0,0,5), in World Space
            glm::vec3(0, 0, 0), // and looks at the origin
            glm::vec3(0, 1, 0)  // Head is up (set to 0,-1,0 to look upside-down)
    );
    glm::mat4 Model = glm::mat4(1.0f);
    glm::mat4 MVP = Projection * View * Model;

    GLuint MatrixID = glGetUniformLocation(programID, "MVP");

    do {
        glClear(GL_COLOR_BUFFER_BIT);

        // Use our shader
        glUseProgram(programID);

        // Send our transformation to the currently bound shader
        glUniformMatrix4fv(MatrixID, 1, GL_FALSE, glm::value_ptr(MVP));

        glEnableVertexAttribArray(0);
        glBindBuffer(GL_ARRAY_BUFFER, vertexbuffer);
        glVertexAttribPointer(
                0,                  // attribute 0. No particular reason for 0, but must match the layout in the shader.
                3,                  // size
                GL_FLOAT,           // type
                GL_FALSE,           // normalized?
                0,                  // stride
                (void*)0            // array buffer offset
        );

        // Bind the element array buffer and draw the rectangle using indices
        glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, elementbuffer);
        glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_INT, (void*)0);

        glDisableVertexAttribArray(0);

        // Swap buffers
        glfwSwapBuffers(window);
        glfwPollEvents();

    } // Check if the ESC key was pressed or the window was closed
    while (glfwGetKey(window, GLFW_KEY_ESCAPE) != GLFW_PRESS &&
           glfwWindowShouldClose(window) == 0);

    // Cleanup VBO and IBO
    glDeleteBuffers(1, &vertexbuffer);
    glDeleteBuffers(1, &elementbuffer);
    glDeleteVertexArrays(1, &VertexArrayID);
    glDeleteProgram(programID);

    // Close OpenGL window and terminate GLFW
    glfwTerminate();

    return 0;
}
