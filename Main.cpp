//#define GLFW_INCLUDE_NONE
//#include <GL/glew.h>
//#include <glad/gl.h>
//#include <glad/gl.c>
//#include <glm/glm.hpp>
//using namespace glm;
#include <GLFW/glfw3.h>

#include <iostream>

#include "Action.h"

//extern "C" {
//    _declspec(dllexport) DWORD NvOptimusEnablement = 0x00000001;
//}
//.._global_profile_settings:


int main()
{
    GLFWwindow* window;

    /* Initialize the library */
    if(!glfwInit())
    {
        exit(EXIT_FAILURE);
        //return -1;
    }

    /* Create a windowed mode window and its OpenGL context */
    //glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
    //glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 5);
    window = glfwCreateWindow(640, 480, "Vaulkan", NULL, NULL);
    if(!window)
    {
        glfwTerminate();
        exit(EXIT_FAILURE);
        //return -1;
    }

    /* Make the window's context current */
    glfwMakeContextCurrent(window);
    std::cout << "OpenGL Version: " << glGetString(GL_VERSION) << std::endl;
    glfwSetKeyCallback(window, Action::key2_callback);
    glfwSwapInterval(1);

    /* Loop until the user closes the window */
    while(!glfwWindowShouldClose(window))
    {
        /* Render here */
        glClear(GL_COLOR_BUFFER_BIT);

        /* Swap front and back buffers */
        glfwSwapBuffers(window);

        /* Poll for and process events */
        //glfwPollEvents();
        glfwWaitEvents();
    }

    glfwDestroyWindow(window);
    glfwTerminate();
    exit(EXIT_SUCCESS);
    //return 0;
}