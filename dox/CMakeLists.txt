if (DOXYGEN)

# disable DOT in doxygen if dot is not found
if(DOXYGEN_DOT_PATH)
    set(DOXYGEN_HAVE_DOT "YES")
else(DOXYGEN_DOT_PATH)
    set(DOXYGEN_HAVE_DOT "NO")
endif(DOXYGEN_DOT_PATH)

# configure the doxygen file
configure_file (${VMDSTREAMS_SOURCE_DIR}/dox/Doxyfile.in ${VMDSTREAMS_BINARY_DIR}/doc/Doxyfile)

add_custom_command (OUTPUT ${VMDSTREAMS_BINARY_DIR}/doc/html/index.html
                    COMMAND ${DOXYGEN} ${VMDSTREAMS_BINARY_DIR}/doc/Doxyfile
                    DEPENDS ${VMDSTREAMS_CPU_SRCS} ${VMDSTREAMS_GPU_SRCS}
                    ${VMDSTREAMS_SOURCE_DIR}/include/*.h
                    ${VMDSTREAMS_SOURCE_DIR}/dox/Doxyfile.in)
                    #${VMDSTREAMS_SOURCE_DIR}/dox/DoxygenLayout.xml)

add_custom_target (dox ALL DEPENDS ${VMDSTREAMS_BINARY_DIR}/dox/html/index.html)

endif (DOXYGEN)
