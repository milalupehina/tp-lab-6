// Copyright 2021 by mila
#include "Engineer.h"


int Engineer::calcBudgetPart(float part, int budget) {
      return myProject->budget / static_cast<int>(part);
}

void Engineer::calc() {
      payment = calcBase(salary, worktime) + calcProAdditions() + calcBonus();
}

int Programmer::calcProAdditions() {
      return static_cast<int>(salary * 0.5);
}
int Programmer::calcBonus() {
      return 20;
}

int TeamLeader::calcHeads() {
    return 4;
}

  // calc();
int TeamLeader::calcBonus() {
      return 25;
}

int Tester::calcProAdditions() {
      return static_cast<int>(salary * 0.75);
}

int Tester::calcBonus() {
      return 21;
}

void Tester::calc() {
      payment = calcBase(salary, worktime) + calcProAdditions() + calcBonus();
}
