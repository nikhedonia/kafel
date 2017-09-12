#include <linux/filter.h>
#include <linux/seccomp.h>
#include <sys/prctl.h>
#include <kafel.h>
#include <iostream>
#include <fstream>

static char const* policy = R"(
POLICY main {
  ALLOW {
    read,
    open,
    close,
    brk,
    lseek,
    write,
    fstatfs,
    newfstat,
    exit,
    exit_group
  }
}
USE main DEFAULT KILL
)";

int main() {
  sock_fprog prog;

  kafel_ctxt_t ctxt = kafel_ctxt_create();
  kafel_set_input_string(ctxt, policy);
  if(kafel_compile(ctxt, &prog)) {
    std::cout << "failed to compile polcy" << std::endl;
    exit(-1);
  }

  prctl(PR_SET_NO_NEW_PRIVS, 1, 0, 0, 0);
  prctl(PR_SET_SECCOMP, SECCOMP_MODE_FILTER, &prog, 0, 0);
  free(prog.filter);

  std::fstream fs("main.cpp");
  std::cout << fs.is_open() << fs.good() << std::endl;

  std::cout << "lol" << std::endl;
  return 1;
}
