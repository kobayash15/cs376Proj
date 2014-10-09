# This is a makefile for ~/robots
# Author: Tanya L. Crenshaw
CC=gcc

robots.out:	main.c robot.o robot.h kobayash15.c kobayash15.h lemon17.c lemon17.h
	$(CC) -o robots.out main.c robot.o kobayash15.c lemon17.c

robot.o:	robot.c robot.h
	$(CC) -c robot.c

