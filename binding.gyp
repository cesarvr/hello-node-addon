{
    "targets": [{

        "target_name": "hello",
        "sources": ["src/hello.cc"],
        "include_dirs": [
            "<!(node -e \"require('nan')\")"
        ],

        "cflags": ["-std=c++11", "-Wall", "-pedantic"]
    }]
}
