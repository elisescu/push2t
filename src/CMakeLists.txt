
set(PUSH2TALK_NAME push2t)

set(PUSH2TALK_SRC
    main.cpp
    capturer.cpp
    )

set(PUSH2TALK_DEPS librtaudio)
set(PUSH2TALK_LIBS rtaudio)

add_executable(${PUSH2TALK_NAME} ${PUSH2TALK_SRC})
add_dependencies(${PUSH2TALK_NAME} ${PUSH2TALK_DEPS})
target_link_libraries(${PUSH2TALK_NAME} ${PUSH2TALK_LIBS})
