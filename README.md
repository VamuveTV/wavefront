# wavefront

WAVEFRONT ALGORITHM README

I found the code for this algorithm from

http://www.robotc.net/forums/viewtopic.php?f=1&t=5043

The code was written by Timothy Friez who happens to be the COO of Robomatter.

I wanted to see how robots navagated through a maze.  I though this was useful because it performs a whole map search.  It performs simular to a flood fill.

I contacted Timothy if I could do a writeup on his code and try to optimize it.

As it turns out, I have yet to make his code any faster than it already is.

However, his code makes use of 2d arrays.

So I changed it around to use 1d arrays for porting the code to Z88DK.

PROGRAM USEAGE

You are presented with a grid on screen with options to the right.

The options on the right are:

Wall - select this and click a grid item to place a wall or barrier in the grid position

Destination - select this and select an area to serve as a target.  You may place only 1 target.

Clear - select this and select an area to clear the grid position.

Once you have built up barriers, you have a choice of Algorithm choices.

Original - Timothy Friez orignial code.

2D array WF2 - modification of Mr. Friez's code, modifications made it slightly slower.

1D array WF3 - 1D array nested loop version.  Uses the X/Y nested loop but the array it references is a 1D array.  Although slower than the original 2D version, is still rather fast.

1D array WF4 - 1D array, unnested loop version.  This is an attempted modification, as it removes the x/y loop and replaces it with a single loop iterating over the entire 150 blocks of the array.  It runs slower than the 1D array WF3 for reasons that baffle me.

1D array WF5 - 1D array, unnested loop version, move start search near target.  This is a optimization, runs slightly faster than 1D array WF4.  This one starts searching for the first wave nearer to the target.  This acts like a pre-seed as the first wave is built by skipping over the blank areas until it finds the target first and then starts building by moving the first index check to the north-west of the target and build up from there.

1D array WF6 - 1D array, unnested loop version, move start search near target and pre-seed the target area.  This is an attempted modification where the 1st two wave are build up prior to the wavefront.  In theory it should prebuild the first 8 blocks near the target, making the remainer blocks build up faster.  However, with added complexity, actually makes it slower.  It's ashame because I spent a while on this idea and a big flop!

1D array WF7 FASE - currently testing this algorithm.  This will be closer to the one targeted with the FASE engine.  Uses unrolled loop, simular to 1D array WF4 and is faster than WF4.  This assumes we already know where the target is (because we do).  Still playing around with this one.  The reason I want to use this one as opposed to the x/y loop version is that I can use this type to partially build a map per pass.


The other options available are the two buttons at the bottom.

Test - Builds the wavefront, using the algorithm selected.

Clear Array - clears out the array to start over.


**NOTE** Somehow, the timers only work on the first run of the algorithms.  Rebuilding the maze will completely mess up the timers.  It's frustrating and I don't know how to fix it.


Most of the algorithms are found in wavefront.h, the exception are the ones still in testing phase, which are in form1.h.  Beware of form.h as the code is a hopeless mess.

speeds

WF1 = 348 ticks
WF2 = 375 ticks
WF3 = 431 ticks
WF4 = 641 ticks
WF5 = 626 ticks
WF6 = 838 ticks
WF7 = 448 ticks
