CC=g++
CFLAGS=-std=c++11 -g -Wall

BUILD_DIR=./build
SRC_DIR=./src
INCLUDE_DIR=./include
TESTS_DIR=./tests

TARGET=tp
TESTS_TARGET=tests

all: ${BUILD_DIR}/${TARGET} ${TESTS_DIR}/${TESTS_TARGET}

${BUILD_DIR}/${TARGET}: ${BUILD_DIR}/baralho.o ${BUILD_DIR}/carta.o ${BUILD_DIR}/excessao.o ${BUILD_DIR}/game.o ${BUILD_DIR}/logica.o ${BUILD_DIR}/mao.o ${BUILD_DIR}/mesa.o ${BUILD_DIR}/usual_card.o ${BUILD_DIR}/main.o
	${CC} ${CFLAGS} -o ${BUILD_DIR}/${TARGET} ${BUILD_DIR}/*.o

${BUILD_DIR}/baralho.o: ${INCLUDE_DIR}/baralho.h ${INCLUDE_DIR}/carta.h ${INCLUDE_DIR}/usual_card.h ${SRC_DIR}/baralho.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR} -c ${SRC_DIR}/baralho.cpp -o ${BUILD_DIR}/baralho.o

${BUILD_DIR}/carta.o: ${INCLUDE_DIR}/carta.h ${SRC_DIR}/carta.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR} -c ${SRC_DIR}/carta.cpp -o ${BUILD_DIR}/carta.o

${BUILD_DIR}/excessao.o: ${INCLUDE_DIR}/excessao.h ${SRC_DIR}/excessao.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR} -c ${SRC_DIR}/excessao.cpp -o ${BUILD_DIR}/excessao.o

${BUILD_DIR}/game.o: ${INCLUDE_DIR}/game.h ${INCLUDE_DIR}/logica.h ${SRC_DIR}/game.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR} -c ${SRC_DIR}/game.cpp -o ${BUILD_DIR}/game.o

${BUILD_DIR}/logica.o: ${INCLUDE_DIR}/logica.h ${SRC_DIR}/logica.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR} -c ${SRC_DIR}/logica.cpp -o ${BUILD_DIR}/logica.o

${BUILD_DIR}/mao.o: ${INCLUDE_DIR}/mao.h ${INCLUDE_DIR}/carta.h ${INCLUDE_DIR}/baralho.h ${INCLUDE_DIR}/mesa.h ${SRC_DIR}/mao.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR} -c ${SRC_DIR}/mao.cpp -o ${BUILD_DIR}/mao.o

${BUILD_DIR}/mesa.o: ${INCLUDE_DIR}/mesa.h ${INCLUDE_DIR}/mao.h ${INCLUDE_DIR}/carta.h ${INCLUDE_DIR}/baralho.h ${SRC_DIR}/mesa.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR} -c ${SRC_DIR}/mesa.cpp -o ${BUILD_DIR}/mesa.o

${BUILD_DIR}/usual_card.o: ${INCLUDE_DIR}/usual_card.h ${INCLUDE_DIR}/carta.h ${SRC_DIR}/usual_card.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR} -c ${SRC_DIR}/usual_card.cpp -o ${BUILD_DIR}/usual_card.o

${BUILD_DIR}/main.o: ${INCLUDE_DIR}/*.h ./main.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR} -c main.cpp -o ${BUILD_DIR}/main.o

# ---

${TESTS_DIR}/${TESTS_TARGET}: ${TESTS_DIR}/baralho.o ${TESTS_DIR}/carta.o ${TESTS_DIR}/excessao.o ${TESTS_DIR}/logica.o ${TESTS_DIR}/mao.o ${TESTS_DIR}/mesa.o ${TESTS_DIR}/usual_card.o ${TESTS_DIR}/game.o ${TESTS_DIR}/tests.o
	${CC} ${CFLAGS} -o ${TESTS_DIR}/${TESTS_TARGET} ${TESTS_DIR}/*.o

${TESTS_DIR}/baralho.o: ${INCLUDE_DIR}/baralho.h ${SRC_DIR}/baralho.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/ -c ${SRC_DIR}/baralho.cpp -o ${TESTS_DIR}/baralho.o

${TESTS_DIR}/carta.o: ${INCLUDE_DIR}/carta.h ${SRC_DIR}/carta.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/ -c ${SRC_DIR}/carta.cpp -o ${TESTS_DIR}/carta.o

${TESTS_DIR}/excessao.o: ${INCLUDE_DIR}/excessao.h ${SRC_DIR}/excessao.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/ -c ${SRC_DIR}/excessao.cpp -o ${TESTS_DIR}/excessao.o

${TESTS_DIR}/game.o: ${INCLUDE_DIR}/game.h ${SRC_DIR}/game.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/ -c ${SRC_DIR}/game.cpp -o ${TESTS_DIR}/game.o

${TESTS_DIR}/logica.o: ${INCLUDE_DIR}/logica.h ${SRC_DIR}/logica.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/ -c ${SRC_DIR}/logica.cpp -o ${TESTS_DIR}/logica.o

${TESTS_DIR}/mao.o: ${INCLUDE_DIR}/mao.h ${SRC_DIR}/mao.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/ -c ${SRC_DIR}/mao.cpp -o ${TESTS_DIR}/mao.o

${TESTS_DIR}/mesa.o: ${INCLUDE_DIR}/mesa.h ${SRC_DIR}/mesa.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/ -c ${SRC_DIR}/mesa.cpp -o ${TESTS_DIR}/mesa.o

${TESTS_DIR}/usual_card.o: ${INCLUDE_DIR}/usual_card.h ${SRC_DIR}/usual_card.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/ -c ${SRC_DIR}/usual_card.cpp -o ${TESTS_DIR}/usual_card.o

${TESTS_DIR}/tests.o: ${INCLUDE_DIR}/baralho.h ${INCLUDE_DIR}/carta.h ${INCLUDE_DIR}/excessao.h ${INCLUDE_DIR}/game.h ${INCLUDE_DIR}/logica.h ${INCLUDE_DIR}/mao.h ${INCLUDE_DIR}/mesa.h ${INCLUDE_DIR}/usual_card.h ${SRC_DIR}/tests.cpp
	${CC} ${CFLAGS} -I ${INCLUDE_DIR}/ -c ${SRC_DIR}/tests.cpp -o ${TESTS_DIR}/tests.o

clean:
	rm -f ${BUILD_DIR}/*.o
	rm -f ${TESTS_DIR}/*.o