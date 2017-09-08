cmake_minimum_required(VERSION 3.8)
project(Hospital_Management_System)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        careGivingEmployee.h
        department.h
        doctor.h
        employee.h
        inspection.h
        main.cpp
        nurse.h
        patient.h
        person.h
        researcher.h
        researchingDoctor.h
        surgeon.h
        surgery.h
        surgeryType.h
        visit.h)

add_executable(Hospital_Management_System ${SOURCE_FILES})