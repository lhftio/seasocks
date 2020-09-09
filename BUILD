package(default_visibility = ["//visibility:public"])

cc_library(
    name = "seasocks-lib",
    strip_include_prefix =
        "src/main/c",
    hdrs = glob([
        "src/main/c/**/*.h",
    ]),
    srcs = glob(
        [
            "src/main/c/**/*.cpp",
            "src/main/c/**/*.h",
        ],
        exclude = [
            "src/main/c/seasocks/ZlibContextDisabled.cpp",
        ],
    ),
    deps = [
        "@system//:zlib",
    ],
)

cc_library(
    name = "seasocks",
    include_prefix = "seasocks",
    strip_include_prefix =
        "src/main/c/seasocks",
    hdrs = glob([
        "src/main/c/seasocks/**/*.h",
    ]),
    deps = [
        "seasocks-lib",
    ],
)
