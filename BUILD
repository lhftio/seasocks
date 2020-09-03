package(default_visibility = ["//visibility:public"])

cc_library(
    name = "seasocks-lib",
    srcs = glob(
        [
            "src/main/c/**/*.cpp",
            "src/main/c/**/*.h",
        ],
        exclude = [
            "src/main/c/seasocks/ZlibContextDisabled.cpp",
        ],
    ),
    hdrs = glob([
        "src/main/c/**/*.h",
    ]),
    strip_include_prefix =
        "src/main/c",
    deps = [
        "@system//:zlib",
    ],
)

cc_library(
    name = "seasocks",
    hdrs = glob([
        "src/main/c/seasocks/**/*.h",
    ]),
    include_prefix = "seasocks",
    strip_include_prefix =
        "src/main/c/seasocks",
    deps = [
        "seasocks-lib",
    ],
)
