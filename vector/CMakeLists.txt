cmake_minimum_required(VERSION 3.1.0)

project(vector)

set(vector_src
        src/Vector2D.cpp
        src/Vector3D.cpp
        )

set(vector_hdr
        include/Vector2D.hpp
        include/Vector3D.hpp
        )

add_library(camel-euclid-vector-new SHARED ${vector_src})

# for install headers
install(FILES ${vector_hdr}
        DESTINATION include/camel-euclid-new/
        )

# for create config.cmake file
install(TARGETS camel-euclid-vector-new
        EXPORT camel-euclid-vector-new-export
        LIBRARY DESTINATION lib
        INCLUDES DESTINATION include
        )

install(EXPORT camel-euclid-vector-new-export
        FILE camel-euclid-vector-new-config.cmake
        DESTINATION share/camel-euclid-vector-new/
        EXPORT_LINK_INTERFACE_LIBRARIES
        )