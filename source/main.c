#include "lc3-vm.h"

int main(int args, char* argv[]) {
    if (args != 2) {
        return 1;
    }    

    return run(argv[1]);
}
