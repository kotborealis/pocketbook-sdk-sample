# PocketBook SDK sample

Sample program using PocketBook SDK.

## Build

To build this sample:
```
$ # Load submodules
$ git submodule init && git submodule update
$
$ # Configure CMake project
$ ./configure.sh # You can pass additional cmake args here
$
$ # Build
$ cmake --build ./build
```

This will create `sample.app` in `./build` directory.
Load this binary to PocketBook via USB into directory `/applications`
(may be hidden) and start it via default app interface:

<img src="https://github.com/kotborealis/pocketbook-sdk-sample/raw/master/docs/sample.jpg" height="400" />
