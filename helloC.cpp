#include <systemc.h>

SC_MODULE(HelloWorld) {
    SC_CTOR(HelloWorld) {
        // Simple process to print "Hello, SystemC CI/CD World!" at time 0
        SC_THREAD(print_message);
    }

    void print_message() {
        std::cout << "Hello, SystemC CI/CD World!" << std::endl;
    }
};

int sc_main(int argc, char* argv[]) {
    // Instantiate the HelloWorld module
    HelloWorld hello("HelloWorld");

    // Start the simulation
    sc_start();

    return 0;
}
