# add librtaudio as a dependency
include(externalproject)

externalproject_add(librtaudio
        PREFIX ${ROOT_DIR}/deps/rtaudio
        SOURCE_DIR ${ROOT_DIR}/deps/rtaudio
        INSTALL_DIR ${ROOT_DIR}/deps/out/
)

