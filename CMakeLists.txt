cmake_minimum_required(VERSION 2.4)

PROJECT(VMDSTREAM)

#################################
find_package(Doxygen)
IF(DOXYGEN_FOUND)
	OPTION(ENABLE_DOXYGEN "Enables building of documentation with doxygen" 1)
	IF(ENABLE_DOXYGEN)
		ADD_SUBDIRECTORY(dox)
{TPS_SOURCE_DIR}/Doxyfile)
	ENDIF(ENABLE_DOXYGEN)
ENDIF(DOXYGEN_FOUND)
#################################

FILE(GLOB files "${VMDSTREAM_SOURCE_DIR}/include/*.h")
INSTALL(FILES ${files} DESTINATION ${CMAKE_INSTALL_PREFIX}/include/vmdstream)
