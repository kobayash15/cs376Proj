# This is a makefile for ~/robots
# Author: Tanya L. Crenshaw
CC=gcc

robots.out:	main.c robot.o robot.h lemon17.c lemon17.h
	$(CC) -o robots.out main.c robot.o lemon17.o

robot.o:	robot.c robot.h
	$(CC) -c robot.c
