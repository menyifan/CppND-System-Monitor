#include <unistd.h>
#include <cctype>
#include <sstream>
#include <string>
#include <vector>

#include "process.h"
#include "linux_parser.h"

using std::string;
using std::to_string;
using std::vector;

// TODO: Return this process's ID
int Process::Pid() const { return pid_; }

// TODO: Return this process's CPU utilization
float Process::CpuUtilization() const {
  return (float) LinuxParser::ActiveJiffies(Pid()) / (float) sysconf(_SC_CLK_TCK) / (float) LinuxParser::UpTime(Pid());
}

// TODO: Return the command that generated this process
string Process::Command() {
  return LinuxParser::Command(Pid());
}

// TODO: Return this process's memory utilization
string Process::Ram() const {
  return LinuxParser::Ram(Pid());
}

// TODO: Return the user (name) that generated this process
string Process::User() {
  return LinuxParser::User(Pid());
}


// TODO: Return the age of this process (in seconds)
long int Process::UpTime() const {
  return LinuxParser::UpTime(Pid());
}

// TODO: Overload the "less than" comparison operator for Process objects
// REMOVE: [[maybe_unused]] once you define the function
bool Process::operator<(Process const& a) const {
  return CpuUtilization() > a.CpuUtilization();
}