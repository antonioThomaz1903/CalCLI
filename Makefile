BUILD_DIR = build
PROG_NAME = Math-C

all: config run

config:
	cmake -S . -B ${BUILD_DIR}
	cmake --build ${BUILD_DIR}

run:
	clear
	./${BUILD_DIR}/${PROG_NAME}

test:
	ctest --test-dir ${BUILD_DIR}

clean:
	rm -rf ${BUILD_DIR}