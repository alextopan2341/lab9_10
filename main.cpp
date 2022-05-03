#include <iostream>
#include "Tests/Tests.h"
#include "UI/UI.h"

int main() {
    tests();
    RepoFile repoFile("filename1");
    Service service(repoFile);
    UI ui(service);
    ui.run_menu();
    return 0;
}
