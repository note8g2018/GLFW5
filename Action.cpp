#include "Action.h"

namespace Action
{
    void key2_callback(GLFWwindow* window, int key, int scancode, int action, int mods)
    {
        double time = glfwGetTime();
        if(key == GLFW_KEY_UP && action == GLFW_PRESS)
        {
            cout << "UP" << endl;
            cout << time << endl;
        }
            
    }

}
