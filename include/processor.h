#ifndef PROCESSOR_H
#define PROCESSOR_H

class Processor {
 public:
  float Utilization();  // TODO: See src/processor.cpp

  // TODO: Declare any necessary private members
 private:
  long activejiffies_n_1 = 0;
  long totaljiffies_n_1 = 0;
};

#endif