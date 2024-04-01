include(FetchContent)

# --------------------------------------------------------------------

# Offline mode (uncomment next line to enable)
# set(FETCHCONTENT_FULLY_DISCONNECTED ON)

# set(FETCHCONTENT_QUIET OFF)

# --------------------------------------------------------------------

# Libraries

# --------------------------------------------------------------------

# fmt with println

project_log("FetchContent: fmt")

FetchContent_Declare(
        fmt
        GIT_REPOSITORY https://github.com/fmtlib/fmt.git
        GIT_TAG 87c066a35b7cc70bb7d438a543c8b49b577e61f4
)
FetchContent_MakeAvailable(fmt)

# --------------------------------------------------------------------

# Unique Function

project_log("FetchContent: function2")

FetchContent_Declare(
        function2
        GIT_REPOSITORY https://github.com/Naios/function2.git
        GIT_TAG 4.2.2
)
FetchContent_MakeAvailable(function2)

# --------------------------------------------------------------------

# tl::expected

project_log("FetchContent: expected")

FetchContent_Declare(
        expected
        GIT_REPOSITORY https://github.com/TartanLlama/expected.git
        GIT_TAG cmake_love
)
FetchContent_MakeAvailable(expected)

# --------------------------------------------------------------------

project_log("FetchContent: asio")

FetchContent_Declare(
        asio
        GIT_REPOSITORY https://github.com/chriskohlhoff/asio.git
        GIT_TAG asio-1-22-1
)
FetchContent_MakeAvailable(asio)

add_library(asio INTERFACE)
target_include_directories(asio INTERFACE ${asio_SOURCE_DIR}/asio/include)

# --------------------------------------------------------------------

# Memory allocation

if((CMAKE_BUILD_TYPE MATCHES Release) AND NOT TWIST_FAULTY)
    project_log("FetchContent: mimalloc")

    FetchContent_Declare(
            mimalloc
            GIT_REPOSITORY https://github.com/microsoft/mimalloc
            GIT_TAG master
    )
    FetchContent_MakeAvailable(mimalloc)

endif()

# --------------------------------------------------------------------

project_log("FetchContent: moodycamel")

FetchContent_Declare(
        moodycamel
        GIT_REPOSITORY https://github.com/cameron314/concurrentqueue
        GIT_TAG master
)
FetchContent_MakeAvailable(moodycamel)
