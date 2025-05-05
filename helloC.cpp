#include <systemc.h>

SC_MODULE(HelloSystemC) {
    SC_CTOR(HelloSystemC) {
        SC_THREAD(print_hello);
    }

    void print_hello() {
        std::cout << "Hello, SystemC CI/CD World!" << std::endl;
    }
};

int sc_main(int argc, char* argv[]) {
    HelloSystemC hello("hello");
    sc_start();
    return 0;
}
