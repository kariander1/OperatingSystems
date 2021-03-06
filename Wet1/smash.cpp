#include <iostream>
#include <unistd.h>
#include <sys/wait.h>
#include "Commands.h"
#include "signals.h"

int main(int argc, char *argv[])
{
    if (signal(SIGTSTP, ctrlZHandler) == SIG_ERR)
    {
        perror("smash error: failed to set ctrl-Z handler");
    }
    if (signal(SIGINT, ctrlCHandler) == SIG_ERR)
    {
        perror("smash error: failed to set ctrl-C handler");
    }
      struct sigaction sig_alarm;


    sigemptyset( &sig_alarm.sa_mask );
    sig_alarm.sa_flags = SA_RESTART;
    sig_alarm.sa_handler = alarmHandler;
   

if ( sigaction( SIGALRM, &sig_alarm, NULL ) != 0)
  {
      perror("smash error: failed to set alarm handler");
  } 


    SmallShell &smash = SmallShell::getInstance();
    //smash.scheduled_alarm = std::numeric_limits<time_t>::max();

    DO_SYS_VAL_NO_RETURN(getpid(), smash.shell_pid);
    while (smash.ShouldRun())
    {
        std::cout << smash.getPromptName() << "> ";
        std::string cmd_line;
        std::getline(std::cin, cmd_line);
        if (cmd_line.empty()) continue;
        smash.executeCommand(cmd_line.c_str());
    }
    return 0;
}