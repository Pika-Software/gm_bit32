# 🔢 Bit32 ![gmod-server-test](https://img.shields.io/github/workflow/status/Pika-Software/gm_bit32/Linux?label=gmod-servers-test&logo=lua&logoColor=blue&style=for-the-badge)
Small module that provide good old `bit32` library (lbitlib.c) from lua (luajit `bit` aka `BitOp a C extension module blah blah` is bullshit with overflowing). Yes, this minidll **use gmod_common** becouse multiplatform and compatibility (I also don't want to fuck with how to get lua_\* functions from lua_shared). If you don't want to get involved with compiling, just click on the [releases](https://github.com/Pika-Software/gm_bit32/releases) and download needed.

[Check original bit32 edit](https://github.com/ezdiy/lua-bit32/blob/master/bit32.c)

## Wait, how do I figure out which of these files I need????????777

~~Fu yours~~ Easy, just run this perfectly string by Billy at your server console:
```lua
lua_run print("gmsv_bit32_" .. ((system.IsLinux() and "linux" .. (jit.arch == "x86" and "" or "64")) or (system.IsWindows() and "win" .. (jit.arch == "x86" and "32" or "64")) or "UNSUPPORTED") .. ".dll")
```

## Requirements

This project requires [garrysmod\_common][1], a framework to facilitate the creation of compilations files (Visual Studio, make, XCode, etc). Simply set the environment variable `GARRYSMOD_COMMON` or the premake option `--gmcommon=path` to the path of your local copy of [garrysmod\_common][1].

## Compiling (may be outdated)

The only supported compilation platform for this project on Windows is **Visual Studio 2017** on **release** mode. However, it's possible it'll work with *Visual Studio 2015* and *Visual Studio 2019* because of the unified runtime.

On Linux, everything should work fine as is, on **release** mode.

For macOS, any **Xcode (using the GCC compiler)** version *MIGHT* work as long as the **Mac OSX 10.7 SDK** is used, on **release** mode.

These restrictions are not random; they exist because of ABI compatibility reasons.

If stuff starts erroring or fails to work, be sure to check the correct line endings (`\n` and such) are present in the files for each OS.

## Can i compile it for client-side?

Yes, do it yourself, just change `serverside` field in premake file :)


[1]: https://github.com/danielga/garrysmod_common
