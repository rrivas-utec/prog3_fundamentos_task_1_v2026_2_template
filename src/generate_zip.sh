#!/usr/bin/env bash

project_name='prog3_fundamentos_task_1_v2026_2'
source_code='
  include/p1.h src/p1.cpp
  include/p2.h src/p2.cpp
  include/p3.h src/p3.cpp
  include/p4.h src/p4.cpp
  include/p5.h src/p5.cpp
  include/p6.h src/p6.cpp
  include/p7.h src/p7.cpp
  include/p8.h src/p8.cpp
  include/p9.h src/p9.cpp
  include/p10.h src/p10.cpp
  include/p11.h src/p11.cpp
  include/p12.h src/p12.cpp
  include/p13.h src/p13.cpp
  include/p14.h src/p14.cpp
  include/p15.h src/p15.cpp
  include/p16.h src/p16.cpp
  include/p17.h src/p17.cpp
  include/p18.h src/p18.cpp
  '
cd .. || exit 1
rm -f ${project_name}.zip
zip -r -S ${project_name} ${source_code}
