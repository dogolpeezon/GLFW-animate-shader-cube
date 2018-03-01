#include "manager.h"

int main( int argc, char **argv ){
    std::cout << "Create Manager.." << '\n' << '\n';
    Manager *pManager = &Manager::getManager();
    pManager->loop();

    std::cout << "destroy Manager.." << '\n';
    Manager::desManager();
}
