
set(PUSH2TALK_NAME push2t)
set(PUSH2TALK_SRC main.cpp)
set(PUSH2TALK_DEPS librtaudio)

add_executable(${PUSH2TALK_NAME} ${PUSH2TALK_SRC})
add_dependencies(${PUSH2TALK_NAME} ${PUSH2TALK_DEPS})
