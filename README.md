# wt
Easy UNIX filetype lookup.

## Updates

Now supports 1,646 file extensions!

## Quick Start

[Download the rep](https://github.com/maelswarm/wt/archive/master.zip)

clone the rep: git clone ht&#8203;tps://git@github.com:maelswarm/wt.git

Compile:

    gcc main.c -o wt

## Usage

    ./wt aiv
    avi: Audio Video Interleave file.
    
    ./wt main.c
    main.c: C language file.

Or move wt to /usr/local/bin

    mv wt /usr/local/bin
    
And then

    wt aiv
    Audio Video Interleave file.
    
    wt main.c
    C language file.
