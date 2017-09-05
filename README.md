# wt
Easy UNIX filetype lookup.

## Quick Start

[Download the rep](https://github.com/roecrew/wt/archive/master.zip)

clone the rep: git clone ht&#8203;tps://git@github.com:roecrew/wt.git

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
    avi: Audio Video Interleave file.
    
    wt main.c
    main.c: C language file.
