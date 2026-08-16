3ncode
======

Graphical video and audio converter for ffmpeg.
This is the SailfishOS app branch.

Fork: revived for aarch64 (branch `aarch64-revival`)
----------------------------------------------------

This fork of [llelectronics/3ncode](https://github.com/llelectronics/3ncode)
makes the app work again on current 64-bit Sailfish OS devices (tested on the
Xperia 10 III) and adds an audio re-gain feature:

- **Bundled aarch64 ffmpeg.** The app shipped static ffmpeg binaries only for
  32-bit ARM and i486, so on aarch64 devices no ffmpeg was installed at all.
  A static aarch64 ffmpeg 7.0.2 ([johnvansickle.com/ffmpeg](https://johnvansickle.com/ffmpeg/),
  GPLv3) is now included and packaged.
- **ffmpeg 7 compatibility.** The mp4/mkv/m4a presets used the long-removed
  `libfaac` encoder ("Unknown encoder"); they now use ffmpeg's native `aac`.
  Error messages show the actual error instead of the ffmpeg banner.
- **New: audio re-gain.** A switch on the main page boosts the audio by a
  chosen amount (+3…+24 dB) — for recordings that are far too quiet. It
  combines with any conversion, or works on its own via the container entry
  "original (audio re-gain only)": then the video stream is copied untouched
  and only the audio is re-encoded, fast and lossless for the picture.

Build with the Sailfish Platform SDK:

```sh
mb2 -t SailfishOS-5.0.0.62-aarch64 build
```

License: GPL (as the original). The bundled ffmpeg is a GPLv3 build; its
sources are available from the link above.
