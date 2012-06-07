#include <unistd.h>
#include <fcntl.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, const char *argv[])
{
    system("touch .hello_there");
    system("chmod -w .hello_there");
    //system("pgrep riddle ---- kill -CONT <pid>");
    system("export ANSWER=42");
    system("mkfifo magic_mirror");
    dup(99);
    return 0;
}
